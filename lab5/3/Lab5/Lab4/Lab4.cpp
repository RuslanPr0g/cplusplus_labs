#include <iostream>
#include <array>

int main() {
    using namespace std;

    int initialSum = 100;
    double daphensInvestment = initialSum;
    double cleosInvestment = initialSum;
    int Years;
    double interest10 = 0.1;
    double interest5 = 0.05;

    for (Years = 0; cleosInvestment <= daphensInvestment; Years++) {
        daphensInvestment = (initialSum * interest10) + daphensInvestment; 
        cleosInvestment = (cleosInvestment * interest5) + cleosInvestment; 
    }
    cout << "Years taken for Cleos investment to exceed Daphnes: " << Years << endl;
    cout << "Daphnes investment: " << daphensInvestment << endl;
    cout << "Cleos investment: " << cleosInvestment << endl;

    return 0;
}