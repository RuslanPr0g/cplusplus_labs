#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    const int MAX_ARRAY_SIZE = 20;
    char first_name[MAX_ARRAY_SIZE];
    char last_name[MAX_ARRAY_SIZE];
    char full_name[MAX_ARRAY_SIZE];

    std::cout << "What is your first name? ";
    cin.getline(first_name, sizeof(first_name));
    std::cout << "What is your last name? ";
    cin.getline(last_name, sizeof(last_name));

    strcpy(full_name, "");

    strcat(full_name, first_name);
    strcat(full_name, ", ");
    strcat(full_name, last_name);

    std::cout << "Full Name: " << full_name << endl;
}
