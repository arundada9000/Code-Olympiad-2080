#include <iostream>
using namespace std;
int main()
{
    int num, i, j;
    system("cls");
    cout << "Enter a number : ";
    cin >> num;
    num < 0 ? cout << num << " is Negative\n" : cout << num << " is positive.\n";
    num % 2 == 0 ? cout << num << " is an even number . " : cout << num << " is an odd number .";
    for (i = 2; i < num / 2 + 1; i++)
        if (num % i == 0)
            break;
    if (i == num / 2 + 1)
        cout << "\nThe number is Prime.";
    else
        cout << "\nThe number is a consonant.";
    return 0;
}