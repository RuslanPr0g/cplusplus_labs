#include <iostream>

void ShowTime(int hour, int minute)
{
    std::cout << "Time: " << hour << " : " << minute << ".";
}

int main()
{
    int h, m;

    std::cout << "Enter hour: ";
    std::cin >> h;
    std::cout << "Enter minute: ";
    std::cin >> m;

    ShowTime(h, m);
}
