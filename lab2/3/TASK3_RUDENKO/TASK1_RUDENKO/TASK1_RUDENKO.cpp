#include <iostream>

using namespace std;

int main() {
    const float milesPer100km = 62.14;
    const float litersPerGallon = 3.875;
    cout << "Enter automobile gasline consumption figure in the European stype (litters per 100 kilometers) :";
    double lp100km;
    cin >> lp100km;

    double mpg = 1 / (lp100km / litersPerGallon) * milesPer100km;
    cout << lp100km
        << " litters per 100 kilometers = "
        << mpg
        << " miles per gallon"
        << endl;

    return 0;
}