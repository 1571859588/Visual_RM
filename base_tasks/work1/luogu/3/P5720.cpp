# include <iostream>
# include <stdio.h>

using namespace std;
int a, ans = 1;

int main () {
	scanf ("%d", &a);
	while (a > 1) {
		ans++; 
		a /= 2;
	}
	cout << ans << endl;
	return 0;
}
