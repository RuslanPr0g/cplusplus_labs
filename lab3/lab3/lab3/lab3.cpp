#include <iostream>

using namespace std;

int main()
{
    const int MAX_ARRAY_SIZE = 20;
    char first_name[MAX_ARRAY_SIZE];
    char last_name[MAX_ARRAY_SIZE];
    char letter;
    int age = 0;

    std::cout << "What is your first name? ";
    cin.getline(first_name, sizeof(first_name));
    std::cout << "What is your last name? ";
    cin.getline(last_name, sizeof(last_name));
    std::cout << "What letter grade do you deserve? ";
    cin >> letter;
    std::cout << "What is your age? ";
    cin >> age;

    letter = letter + 1;

    std::cout << "Name: " << last_name << ", " << first_name << endl;
    std::cout << "Grade: " << letter << endl;
    std::cout << "Age: " << age << endl;
}
