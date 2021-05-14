#include "golf.h"
#include <cstring>
#include <iostream>

void setgolf(golf& g, const char* name, int hc) {
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf& g) {
    std::cout << "Enter name: ";
    std::cin.getline(g.fullname, Len);

    std::cout << "Enter handicap: ";
    (std::cin >> g.handicap).get();

    return strlen(g.fullname) == 0 ? 0 : 1;
}

void handicap(golf& g, int hc) {
    g.handicap = hc;
}

void showgolf(const golf& g) {
    std::cout << "Name: " << g.fullname << std::endl;
    std::cout << "Handicap: " << g.handicap << std::endl;
}