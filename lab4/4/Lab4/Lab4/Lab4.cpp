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
	Pizza * snack = new Pizza;

	cout << "Enter diameter: ";
	cin >> snack->diameter;

	cin.ignore();

	cout << "Enter name: ";
	getline(cin, snack->name, '\n');

	cout << "Enter weight: ";
	cin >> snack->weight;

	cout << "\n\n";

	cout << "Name: " << snack->name << endl;
	cout << "Diameter: " << snack->diameter << endl;
	cout << "Calories: " << snack->weight << endl;
}
