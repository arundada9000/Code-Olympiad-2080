#include <iostream>
using namespace std;
void lcm(int a, int b)
{
    int i = 1, value;
    int small = min(a, b);
    value = max(a, b);
    a = small;
    b = value;
    do
    {
        value = small * i;
        i++;
    } while (value % b != 0);
    cout << "Lcm of " << a << " and " << b << " = " << value;
}
int main()
{
    system("cls");
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    lcm(a, b);

    return 0;
}