#include <iostream>
#include <string>

using namespace std;

int main() {
    string months[]{
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December"
    };
    int sales[12]{ 0 };

    for (int i = 0; i < 12; i++) {
        cout << "Enter the number of books sold in " + months[i] + ": ";
        cin >> sales[i];
    }

    int totalSales = 0;

    for (int i = 0; i < 12; i++) {
        totalSales += sales[i];
    }

    cout << "Total sales for the year: " << totalSales << endl;

    return 0;
}