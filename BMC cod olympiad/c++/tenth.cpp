#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int num;
    bool even = true;
    cout << "Enter a number : ";
    cin >> num;
    cout << num;
    while (num > 0)
        num -= 2;

    if (num == 0)
        cout << " is an even number.";
    else
        cout << " is an odd number.";
    return 0;
}