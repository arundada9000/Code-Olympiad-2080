#include <iostream>
using namespace std;
int table(int a, int i)
{
    if (i == 11)
        return 0;
    else
    {
        cout << a << " X " << i << " = " << a * i << endl;
        return table(a, ++i);
    }
}
int main()
{
    system("cls");
    int a;
    cout << "Enter a number : ";
    cin >> a;
    table(a, 1);
    cout << "\nThe end.";
    return 0;
}