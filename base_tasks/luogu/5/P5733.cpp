#include<bits/stdc++.h>
using namespace std;
char ch;
int main(){
	if(cin>>ch){//判断是否输入 
		if(ch>='a'&&ch<='z')ch+='A'-'a';//转换大小写 
		cout<<ch;//输出 
		main();//递归调用 
	} 
	return 0;//如果没有输入就退出 
}

