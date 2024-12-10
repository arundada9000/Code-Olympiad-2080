#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int num, fact = 1;
    cout << "Enter a number : ";
    cin >> num;
    int num2 = num;
    while (num >= 1)
    {
        fact *= num;
        num--;
    }
    cout << "Factorial of " << num2 << " = " << fact;
    return 0;
}