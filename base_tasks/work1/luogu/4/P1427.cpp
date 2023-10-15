#include<iostream>
#include<stack>
using namespace std;
stack<int> a;
int k;
int main(){
	while(cin>>k) a.push(k);a.pop();//这种输入方式在本地调试的时候需要在输入结束后按Ctrl+Z来结束输入
	while(!a.empty()) cout<<a.top()<<" ",a.pop();
	return 0;
}
