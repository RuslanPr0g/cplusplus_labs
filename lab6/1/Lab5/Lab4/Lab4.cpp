#include <iostream>

using namespace std;

int largerThanAverage(int count, double donations[], double average)
{
	int largerThanAverage = 0;

	for (int j = 0; j < count; j++) {
		if (donations[j] > average) {
			largerThanAverage++;
		}
	}

	return largerThanAverage;
}

int main() {
	const int MAX_DONATIONS = 10;
	double donations[MAX_DONATIONS];

	cout << "Enter your donations.\nYou can enter a maximum of " << MAX_DONATIONS << " donations. <Enter q to terminate>" << endl;

	int count = 0;

	cout << "Donation #1: ";

	while (count < MAX_DONATIONS && cin >> donations[count]) {
		if (++count < MAX_DONATIONS) {
			cout << "Donation #" << count + 1 << ": ";
		}
	}

	double totalDonations = 0;

	for (int i = 0; i < count; i++) {
		totalDonations += donations[i];
	}

	double average = totalDonations / count;

	cout << "Average Donation: " << average << endl;

	cout << "Number of donations larger than the average: " << largerThanAverage(count, donations, average) << endl;

	return 0;
}