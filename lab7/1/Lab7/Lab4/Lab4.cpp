#include <iostream>

bool input(double arr[], int n);
void display(const double arr[], int n);
double avg(const double arr[], int n);

using namespace std;
const int NUM = 10;

int main()
{
	double point;
	double score[NUM];

	if (!input(score, NUM))
		return 0;

	avg(score, NUM);
	display(score, NUM);

	return 0;
}

bool input(double arr[], int n)
{
	int i = 0;
	double score[NUM];

	cout << "Please, enter 10 golf scores: " << endl;

	while (cin && i < NUM)
	{
		cout << "\n#" << i + 1 << ": ";
		cin >> arr[i];

		if (arr[i] < 0)
			return false;

		++i;
	}

	if (i == NUM)
		return true;
	else
		return false;
}

void display(const double arr[], int n)
{
	cout << "The scores are: ";
	for (int i = 0; i < NUM; i++)
		cout << arr[i] << " ";

	cout << "The average score is " << avg(arr, n) << "." << endl;
}

double avg(const double arr[], int n)
{
	double total = 0;

	for (int i = 0; i < n; i++)
		total += arr[i];

	return total / NUM;
}