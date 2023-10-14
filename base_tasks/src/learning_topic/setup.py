from setuptools import find_packages, setup

package_name = 'learning_topic'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='lenck',
    maintainer_email='1571859588@qq.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'helloworld_pub = learning_topic.topic_helloworld_pub:main',
            'helloworld_sub = learning_topic.topic_helloworld_sub:main',
            
        ],
    },
)
