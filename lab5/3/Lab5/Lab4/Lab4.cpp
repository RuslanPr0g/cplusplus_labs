#include <iostream>

using namespace ::std;

int main()
{
	int a = 0, b = 0;

start:
	cout << "Enter an a: " << endl;
	cin >> a;

	cout << "Enter a b: " << endl;
	cin >> b;

	if (a > b) {
		cout << "Please, enter a valid number..." << endl;
		goto start;
	}
	else if (a == b) {
		cout << a << endl;
	}
	else {
		cout <<  "\n\nResult: " << ((b - a + 1) * (a + b)) / 2 << endl << endl;
	}
}
