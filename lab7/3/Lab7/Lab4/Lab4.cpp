#include <iostream>
using namespace std;

int factorial(int n);


int main()
{
    int number = 0;
    cout << "Enter a number(0 to quit): ";
    while (cin >> number && number!= 0)
    {
        cout << "Here is the factorial of the number: " << factorial(number) << ". \n"
            "Enter next number(0 to quit): ";
    }

    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}