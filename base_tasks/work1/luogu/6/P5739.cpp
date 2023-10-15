#include<bits/stdc++.h>
using namespace std;
long long jie(int n){
	if(n==1) return 1;
	return n*jie(n-1);
}
int main(){
	int n;
	cin>>n;
	long long m=jie(n);
	cout<<m<<endl;
	return 0;
}
