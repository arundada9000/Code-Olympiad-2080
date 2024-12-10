#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    system("cls");
    int num, num2, i = 0, rem, num3 = 0;
    cout << "Enter a number : ";
    cin >> num;
    num2 = num;
    while (num > 0)
    {
        num = num / 10;
        i++;
    }
    num = num2;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        num3 += pow(rem, i);
    }
    if (num2 == num3)
        cout << num2 << " is an armstrong...";
    else
        cout << num2 << " is not an armstrong..." << num3 << " i = " << i;
    return 0;
}