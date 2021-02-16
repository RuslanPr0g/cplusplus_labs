#include <iostream>

struct CandyBar {
	char name[20];
	double weight;
	int calories;
};

using namespace ::std;

int main()
{
	CandyBar snack[3] = {
	{
		"Mocha Munch",
		2.3,
		350
	},
	{
		"Mocha Obey",
		9.1,
		550
	},
	{
		"Oreo Trio",
		4.7,
		299
	}
	};

	for (int i = 0; i < 3; i++)
	{
		cout << "Name: " << snack[i].name << endl;
		cout << "Weight: " << snack[i].weight << endl;
		cout << "Calories: " << snack[i].calories << endl;
		cout << "___________________________________" << endl;
	}
}
