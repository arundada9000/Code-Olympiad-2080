#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int num, i, num2 = 0, num3;
    cout << "Enter a number: ";
    cin >> num;
    num3 = num;
    for (i = 1; num > 0; i++)
    {
        num2 = (num2 * 10) + (num % 10);
        num /= 10;
    }
    if (num2 == num3)
        cout << num3 << " is a palindrome...";
    else
        cout << num3 << " is not a palindromel...";
    return 0;
}