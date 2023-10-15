#include <bits/stdc++.h>
using namespace std;
bool vis[100001]={1,1};//0,1标为不是
int n;
void Era(int qwq)
{
    for(int i=2;i<=qwq;i++)
    {
        if(vis[i])
        {
            continue;
        }//是合数就不执行
        for(int j=i*2;j<=qwq;j+=i)//从i×2开始筛，因为进过判断后i为素数
        {
            vis[j]=true;//j=i的倍数，每次加i，即为i的倍数每次加1，p数组的第j个元素标为合数
        }
    }
}
int main()
{
    cin>>n;
    int tmp;
    Era(100001);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&tmp);
        if(!vis[tmp])//已经记下了，判断一下即可
        {
            cout<<tmp<<" ";
        }//真就不是，假就是
    }
    return 0;
}
