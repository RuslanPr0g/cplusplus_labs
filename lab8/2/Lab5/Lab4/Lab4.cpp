#include <iostream>
#pragma GCC diagnostic ignored "-Wwrite-strings"
using namespace std;

struct CandyBar {
    char * brand;
    double weight;
    int calories;
};

void setValues(CandyBar&, const char* brand = "Millennium Munch", double weight = 2.85, int calories = 350);
void printCandyBar(const CandyBar&);

int main() {
    CandyBar candyBar;

    cout << "Set and show default values." << endl;
    setValues(candyBar);
    printCandyBar(candyBar);

    cout << "Set and show non-default values." << endl;
    setValues(candyBar, "A Brand", 1.5, 100);
    printCandyBar(candyBar);

    return 0;
}

void setValues(CandyBar& candyBar, const char* brand, double weight, int calories) {
    candyBar.brand = const_cast<char*>(brand);
    candyBar.weight = weight;
    candyBar.calories = calories;
}

void printCandyBar(const CandyBar& candyBar) {
    cout << "Brand: " << candyBar.brand << endl;
    cout << "Weight: " << candyBar.weight << endl;
    cout << "Calories: " << candyBar.calories << endl << endl;
}