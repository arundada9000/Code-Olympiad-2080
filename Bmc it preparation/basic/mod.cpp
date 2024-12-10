// finding remainder without using %
#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a, b, mod, ans;
    cout << "Enter two numbers : a/b : ";
    cin >> a >> b;
    cout << a << "/" << b << " = " << a / b;
    if ((a / b) * b != a)
        cout << " and " << (a - (a / b) * b) << " remainder";

    return 0;
}