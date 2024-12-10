#include <iostream>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    if (num == 0 || num == 1)
        return 1;
    else
        return (num * factorial(num - 1));
}
int main()
{
    system("cls");
    int i, num, num2, fact = 1;
    cout << "Enter a number : ";
    cin >> num;
    num2 = num;
    // while (num >= 1)
    // {
    //     fact *= num;
    //     num--;
    // }
    for (i = 1; i <= num2; i++)
        fact *= i;

    cout << "Factorial of " << num2 << " = " << fact << endl;
    cout << "Factorial using recursion = " << factorial(num);
    return 0;
}