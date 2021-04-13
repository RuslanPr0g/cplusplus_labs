#include <iostream>

const int MAX_VALUES = 100;

int Fill_array(double*, int);
void Show_array(double*, int);
void Reverse_array(double*, int);

int main() {
    double values[MAX_VALUES];

    int numValues = Fill_array(values, MAX_VALUES);

    Show_array(values, numValues);
    Reverse_array(values, numValues);
    Show_array(values, numValues);

    if (numValues > 2) {
        Reverse_array(&values[1], numValues - 2);
        Show_array(values, numValues);
    }
}

int Fill_array(double* values, int size) {
    double value = 0;
    int numValues = 0;

    std::cout << "Enter a value (q  to quit): ";

    while (std::cin >> value && numValues < size) {
        values[numValues++] = value;

        std::cout << "Enter another value (q  to quit): ";
    }

    return numValues;
}

void Show_array(double* values, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << values[i];

        if ((i + 1) < size) {
            std::cout << ", ";
        }
    }

    std::cout << std::endl;
}

void Reverse_array(double* values, int size) {
    double temp = 0;

    for (int i = 0; i < (size / 2); i++) {
        temp = values[i];
        values[i] = values[size - i - 1];
        values[size - i - 1] = temp;
    }
}