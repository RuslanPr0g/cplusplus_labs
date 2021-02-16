#include <iostream>
#include <string>

using namespace ::std;

struct Pizza {
	string name;
	double diameter;
	double weight;
};

int main()
{
	Pizza snack;

	cout << "Enter name: ";
	getline(cin, snack.name);

	cout << "Enter diameter: ";
	cin >> snack.diameter;

	cout << "Enter weight: ";
	cin >> snack.weight;

	cout << "\n\n";

	cout << "Name: " << snack.name << endl;
	cout << "Weight: " << snack.diameter << endl;
	cout << "Calories: " << snack.weight << endl;
}
