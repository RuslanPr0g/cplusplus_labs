#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

struct car
{
	string make;
	int year;
};

int main()
{
	int num;
	cout << "How many cars do you wish to catalog? ";
	cin >> num;

	car* catalog = new car[num];

	for (int i = 0; i < num; ++i) {
		cout << "Please enter the make: " << endl;

		cin.ignore(1, '\n');
		getline(cin, catalog[i].make);

		cout << "Please enter the year made: " << endl;
		cin >> catalog[i].year;
	}

	cout << "Here's your collection: " << endl;
	for (int i = 0; i < num; ++i) {
		cout << catalog[i].year << " " << catalog[i].make << endl;
	}

	delete[] catalog;

	return 0;
}