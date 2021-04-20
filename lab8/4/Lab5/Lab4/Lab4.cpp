#include <iostream>

using namespace std;

#include <cstring> 

struct stringy {
    char* str; 
    int ct; 
};

void set(stringy&, const char*);
void show(const char*, int n = 1);
void show(const stringy&, int n = 1);

int main() {
    stringy beany;

    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing); 

    show(beany); 
    show(beany, 2); 

    testing[0] = 'D';
    testing[1] = 'u';

    show(testing); 
    show(testing, 3); 
    show("Done!");

    return 0;
}

void set(stringy& aStringy, const char* aString) {
    int stringLength = sizeof(aString) / sizeof(char);
    aStringy.str = new char[stringLength];
    aStringy.ct = stringLength;

    strcpy(aStringy.str, aString);
}

void show(const char* aString, int n) {
    for (int i = 0; i < n; i++) {
        cout << aString << endl;
    }
}

void show(const stringy& aStringy, int n) {
    for (int i = 0; i < n; i++) {
        cout << aStringy.str << endl;
    }
}