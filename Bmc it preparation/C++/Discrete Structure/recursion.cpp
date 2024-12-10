#include <iostream>
using namespace std;
long int factorial(int a)
{
    if (a == 1 || a == 0)
        return 1;
    else
        return (a * factorial(a - 1));
}
int main()
{
    system("cls");
    int a;
    cout << "Enter a number : ";
    cin >> a;
    cout << "Factorial of " << a << " = " << factorial(a);
    return 0;
}