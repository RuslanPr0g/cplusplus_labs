#include <iostream>
#include <cstring>
#include <cctype>

int main()
{
    using namespace std;
    string a;

    cout << "Enter words (q to quit)\n";

    int others = 0;
    int vowels = 0;
    int consonant = 0;

    cin >> a;

    while (a != "q")
    {
        cin >> a;
        if (isalpha(a[0])) {
            switch (a[0]) {
            case 'a':
            case 'i':
            case 'u':
            case 'e':
            case 'o':
                vowels++;
                break;
            default:
                consonant++;
                break;
            }
        }
        else {
            others++;
        }

    }


    cout << vowels << " words beginning with vowels\n";
    cout << consonant << " words beginning with consonant\n";
    cout << others << " others";

    return 0;
}