#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/image.hpp>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/opencv.hpp>

class ImageSubscriber : public rclcpp::Node
{
public:
    ImageSubscriber() : Node("image_subscriber")
    {
        image_sub_ = create_subscription<sensor_msgs::msg::Image>(
            "image", 10, std::bind(&ImageSubscriber::image_callback, this, std::placeholders::_1));
    }

private:
    void image_callback(const sensor_msgs::msg::Image::SharedPtr msg)
    {
        try
        {
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(msg, sensor_msgs::image_encodings::BGR8);

            // 加载已知物品的图像
            cv::Mat object_img = cv::imread("/home/lenck/RM/base_tasks/Image/apple.jpeg", cv::IMREAD_COLOR);
            if (object_img.empty())
            {
                RCLCPP_ERROR(this->get_logger(), "Failed to load object image");
                return;
            }

            // 使用模板匹配算法查找已知物品
            cv::Mat result;
            cv::matchTemplate(cv_ptr->image, object_img, result, cv::TM_CCOEFF_NORMED);

            double min_val, max_val;
            cv::Point min_loc, max_loc;
            cv::minMaxLoc(result, &min_val, &max_val, &min_loc, &max_loc);

            // 如果匹配度超过阈值，框出物品并显示图像
            if (max_val > 0.8)
            {
                cv::rectangle(cv_ptr->image, max_loc, cv::Point(max_loc.x + object_img.cols, max_loc.y + object_img.rows), cv::Scalar(0, 255, 0), 2);
                cv::imshow("Image", cv_ptr->image);
                cv::waitKey(1);
            }
        }
        catch (cv_bridge::Exception &e)
        {
            RCLCPP_ERROR(this->get_logger(), "cv_bridge exception: %s", e.what());
            return;
        }
    }

    rclcpp::Subscription<sensor_msgs::msg::Image>::SharedPtr image_sub_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<ImageSubscriber>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}