#include <iostream>

struct CandyBar {
    char name[20];
    double weight;
    int calories;
};

using namespace ::std;

int main()
{
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };

    cout << "Name: " << snack.name << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calories << endl;
}
