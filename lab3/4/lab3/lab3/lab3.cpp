#include <iostream>
#include<string>

using namespace std;

int main()
{
    string first_name;
    string last_name;
    string full_name;

    std::cout << "What is your first name? ";
    getline(cin, first_name);
    std::cout << "What is your last name? ";
    getline(cin, last_name);

    full_name = last_name + ", " + first_name;

    std::cout << "Full Name: " << full_name << endl;
}
