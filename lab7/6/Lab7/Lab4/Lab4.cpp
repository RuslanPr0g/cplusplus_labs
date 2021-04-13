#include <iostream>

using namespace std;

const int NUM_CALCULATIONS = 3;

double add(double, double);
double product(double, double);
double difference(double, double);
double calculate(double, double, double (*pf)(double, double));

int main() {
    double (*pf[NUM_CALCULATIONS])(double, double) = { add, product, difference };
    const char* type[NUM_CALCULATIONS] = { "Add", "Product", "Difference" };
    double x = 0, y = 0;

    cout << "Enter x and y (q to quit): ";

    while (cin >> x >> y) {
        for (int i = 0; i < NUM_CALCULATIONS; i++) {
            cout << type[i] << ": " << calculate(x, y, (*pf[i])) << endl;
        }

        cout << "Enter x and y (q to quit): ";
    }

    return 0;
}

double add(double x, double y) {
    return x + y;
}

double product(double x, double y) {
    return x * y;
}

double difference(double x, double y) {
    return x - y;
}

double calculate(double x, double y, double (*pf)(double, double)) {
    return (*pf)(x, y);
}