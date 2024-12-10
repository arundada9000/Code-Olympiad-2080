#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int a = 0, b = 1, n, c;
    cout << "Enter nth term : ";
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << n << "th fibonacci = " << c;
    return 0;
}