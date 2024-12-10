#include <iostream>
using namespace std;
int main()
{
    system("cls");
    char c;
    cout << "Enter a letter : ";
    cin >> c;
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            cout << c << " is a vowel.";
        else
            cout << c << " is a consonant.";
    }
    else
        cout << "Please enter between a-z or A-Z...";
    return 0;
}