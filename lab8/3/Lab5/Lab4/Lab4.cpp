#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void toUppercase(string&);

int main() {
    string aString;

    cout << "Enter a string (q to quit): ";

    while (getline(cin, aString) && aString != "q") {
        toUppercase(aString);

        cout << aString << endl;
        cout << "Next string (q to quit): ";
    }


    return 0;
}

void toUppercase(string& aString) {
    for (unsigned i = 0; i < aString.size(); i++) {
        aString[i] = toupper(aString[i]);
    }
}