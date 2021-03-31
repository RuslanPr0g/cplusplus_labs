#include <iostream>

int main(int argc, char** argv) {
    using namespace std;

    double income;

    cout << "Enter your income: ";

    while (cin >> income && income >= 0) {
        double totalTax = 0;
        double taxable = 0;

        if (income > 35000) {
            taxable = income - 35000;
            income = 35000;
            totalTax += (0.2 * taxable);
        }

        if (income > 15000) {
            taxable = income - 15000;
            income = 15000;
            totalTax += (0.15 * taxable);
        }

        if (income > 5000) {
            taxable = income - 5000;
            income = 5000;
            totalTax += (0.1 * taxable);
        }

        cout << "Your total tax is " << totalTax << " tvarps" << endl;
        cout << "Enter next income amount: ";
    }

    return 0;
}