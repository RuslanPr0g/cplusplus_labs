#include <iostream>

int main(int argc, char** argv) {
    using namespace std;

    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore            p) pianist\n";
    cout << "t) tree                 g) game\n";

    char selection;

    while (cin >> selection && selection != 'c' && selection != 'p' && selection != 't' && selection != 'g') {
        cout << "Please enter a c, p, t, or g: ";
    }

    switch (selection) {
    case 'c':
        cout << "A tiger is a carnivore" << endl;

        break;

    case 'p':
        cout << "John Legend is a pianist." << endl;

        break;

    case 't':
        cout << "A maple is a tree." << endl;

        break;

    case 'g':
        cout << "Monopoly is a game" << endl;

        break;
    }

    return 0;
}