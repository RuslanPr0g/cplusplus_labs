#include <iostream>

using namespace std;

int main()
{
    int latitudeDegrees = 0, minutes = 0, seconds = 0;
    
    std::cout << "Enter latitude degrees, minutes, seconds\n";

    cin >> latitudeDegrees;
    cin >> minutes;
    cin >> seconds;

    float degreesM = (minutes / static_cast<float>(60));
    float degreesS = (seconds / static_cast<float>(3600));

    cout << latitudeDegrees << endl;
    cout << degreesM << endl;
    cout << degreesS << endl;
    cout << "\n\nResult: " << latitudeDegrees + degreesM + degreesS << "\n\n";
}
