#include <iostream>
using namespace std;
int a[10001], s[101], e[101];

int main() {
	int L, M;
	int ans = 0;
	cin >> L >> M;
	for (int i = 0; i < M; i++) {
		cin >> s[i] >> e[i];
		for (int j = s[i]; j <= e[i]; j++) {
			a[j] = 1; //在马路上这段距离的整数点标位1
		}
	}
	for (int i = 0; i <= L; i++) {
		if (a[i] == 0)
			ans++;//没被标记过的点说明没有修地铁，树保留
	}
	cout << ans;
}
