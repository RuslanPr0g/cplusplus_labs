#include <iostream>

int main(int argc, char** argv) {
    using namespace std;

    int numRows = 0;

    cout << "Enter number of rows: ";
    cin >> numRows;

    int numAsterisks = 1;
    int numPeriods = numRows - numAsterisks;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numPeriods; j++) {
            cout << '.';
        }

        for (int k = 0; k < numAsterisks; k++) {
            cout << '*';
        }

        cout << endl;

        numPeriods--;
        numAsterisks++;
    }

    return 0;
}