#include <iostream>
#include <vector>
using namespace std;


int main() {
	int b;
	cin >> b;
	if ((b % 4 == 0 && b % 100 != 0) || b % 400 == 0)
		cout << 1;
	else
		cout << 0;
}
