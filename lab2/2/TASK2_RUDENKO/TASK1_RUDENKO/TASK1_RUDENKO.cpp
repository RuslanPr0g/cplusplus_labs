#include <iostream>

using namespace std;

void ConvertSectoDay(long long n)
{
    long long day = n / (24 * 3600);

    n = n % (24 * 3600);
    long long hour = n / 3600;

    n %= 3600;
    long long minutes = n / 60;

    n %= 60;
    long long seconds = n;

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