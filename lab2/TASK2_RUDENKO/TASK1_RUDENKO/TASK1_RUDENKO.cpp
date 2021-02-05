#include <iostream>

int convertYearsToMonths(int years)
{
	return years * 12;
}

int main()
{
	int age = 0;

	std::cout << "Enter you age: ";
	std::cin >> age;

	if (age >= 0)
		std::cout << "Your age in months: " << convertYearsToMonths(age) << ".";
	else
		std::cout << "Please, enter a valid age.";
}
