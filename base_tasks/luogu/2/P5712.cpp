#include <iostream>
#include <vector>
using namespace std;


int main() {
	int b;
	cin >> b;
	cout << "Today, I ate " ;
	cout << b;
	if (b == 1 || b == 0) {
		cout << " apple.";

	} else
		cout << " apples.";
}
