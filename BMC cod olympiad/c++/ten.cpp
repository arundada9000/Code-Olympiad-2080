#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int pos;
    cout << "Enter the position : ";
    cin >> pos;
    int a = 0, b = 1;
    for (int i = 0; i < pos - 1; i++)
    {
        int temp = a + b;
        a = b;
        b = temp;
    }
    cout << "Fibonacci at " << pos << "th position = " << a;
    return 0;
}