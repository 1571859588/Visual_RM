#include<bits/stdc++.h>//万能头文件
using namespace std;//using
int main()
{
    int n,a[10001];//定义
    cin>>n;//输入
    for(int i=1;i<=n;i++) cin>>a[i];//循环输入
    sort(a+1,a+n+1);//快速排序
    cout<<a[1];//输出最小答案
    return 0;//华丽结束
}
