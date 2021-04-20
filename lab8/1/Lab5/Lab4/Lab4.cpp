#include <iostream>

using namespace std;

void printString(const char*, int n = 0);


int main() {
    const char* aString = "A String.";

    printString(aString);
    cout << endl;
    printString(aString);
    cout << endl;
    printString(aString, 5);
    cout << endl;
    printString(aString, -1);

    return 0;
}

void printString(const char* aString, int n) {
    static int numCalled = 0;

    numCalled++;

    if (n != 0) {
        for (int i = 0; i < numCalled; i++) {
            cout << aString << endl;
        }
    }
    else {
        cout << aString << endl;
    }
}