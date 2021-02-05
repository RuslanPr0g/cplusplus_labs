#include <iostream>

using namespace std;

void ConvertSectoDay(int n)
{
    int day = n / (24 * 3600);

    n = n % (24 * 3600);
    int hour = n / 3600;

    n %= 3600;
    int minutes = n / 60;

    n %= 60;
    int seconds = n;

    cout << day << " " << "days " << hour
        << " " << "hours " << minutes << " "
        << "minutes " << seconds << " "
        << "seconds " << endl;
}

int main()
{
    long long n = 0;

    cout << "Seconds: ";
    cin >> n;
    cout << "\n\n";

    ConvertSectoDay(n);

    return 0;
}