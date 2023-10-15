#include <iostream>
#include <vector>
using namespace std;


int main() {
	int b;
	cin >> b;
	int f1 = 0, f2 = 0;
	if (b % 2 == 0)
		f1 = 1;
	if (b > 4 && b <= 12)
		f2 = 1;
	if (f1 && f2)
		cout << "1 ";
	else
		cout << "0 ";
	if (f1 || f2)
		cout << "1 ";
	else
		cout << "0 ";
	if ((f1 && f2 == 0) || (f1 == 0 && f2))
		cout << "1 ";
	else
		cout << "0 ";
	if (f1 == 0 && f2 == 0)
		cout << "1 ";
	else
		cout << "0 ";
}
