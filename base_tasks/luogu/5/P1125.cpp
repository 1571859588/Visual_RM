#include<cstdio>
#include<cstring>//strlen函数
using namespace std;
char s[110];
const int prime[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};//打表
int sum[26];//记录和
int main(){
	int maxn=0,minn=110;//最大值和最小值，注意初始化
	scanf("%s",s);//用scanf读入字符数组时，注意不用加&
	int len=strlen(s);//求字符串长度的函数
	for(int i=0;i<len;i++){//遍历字符串
		sum[s[i]-'a']++;//见上
	}
	for(int i=0;i<26;i++){//遍历26个字母
		if(sum[i]>maxn) maxn=sum[i];//比较maxn
		if(sum[i]>0&&sum[i]<minn) minn=sum[i];//比较minn，只比较出现过的字母
	}
	for(int i=0;i<25;i++){//遍历25个质数
		if(maxn-minn==prime[i]){//满足条件了
			printf("Lucky Word\n%d",maxn-minn);//输出，注意格式
			return 0;//返回
		}
	}
	printf("No Answer\n0");//不满足的情况，注意输出0
	return 0;//华丽结束
}
