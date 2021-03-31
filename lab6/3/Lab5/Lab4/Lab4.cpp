#include <iostream>
const int StrSize = 25;

struct bop
{
    char fullName[StrSize];
    char title[StrSize];
    char bopName[StrSize];
    int preference;
};

int main()
{

    bop member[4] = { "Scott Doe", "Hacker", "Amarok", 2,
                      "Jessica Doe", "Gamer", "Laelith", 0,
                      "Sammy Farha", "Dog", "Samson", 1,
                      "Albert Einstein", "Genius", "Relativity", 2 };

    std::cout << "Benevolent Order of Programmers Report\n";
    std::cout << "a) display name       b) display title\n";
    std::cout << "c) display bopname    d) display preference\n";
    std::cout << "q) quit\n";

    char choice;
    do
    {
        std::cout << ">>> ";
        std::cin >> choice;
        choice = tolower(choice);

        for (int i = 0; i < 4; i++)
        {
            switch (choice)
            {
            case 'a': std::cout << member[i].fullName << std::endl; break;
            case 'b': std::cout << member[i].title << std::endl; break;
            case 'c': std::cout << member[i].bopName << std::endl; break;
            case 'd': switch (member[i].preference)
            {
            case 0: std::cout << member[i].fullName << std::endl; break;
            case 1: std::cout << member[i].title << std::endl; break;
            case 2: std::cout << member[i].bopName << std::endl; break;
            };
            }
        }
    } while (choice != 'q');

    std::cout << "\nBye!\n";
    return 0;
}