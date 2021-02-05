#include <iostream>

void output1();
void output2();

int main()
{
    output1();
    output1();
    output2();
    output2();
}

void output1()
{
    std::cout << "Three blind mice\n";
}

void output2()
{
    std::cout << "See how they run\n";
}