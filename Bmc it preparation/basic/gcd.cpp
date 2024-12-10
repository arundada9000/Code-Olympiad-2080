#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int k = (a < b) ? a : b;
    while (k != 0)
    {
        if (a % k == 0 && b % k == 0)
        {
            cout << "GCD of " << a << " and " << b << " = " << k;
            break;
        }
        k--;
    }
    return 0;
}
int main()
{
    system("cls");
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    gcd(a, b);
    return 0;
}