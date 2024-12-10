#include <iostream>
using namespace std;
bool powerof(int a)
{
    if (a == 2)
        return true;
    else if (a % 2 != 0)
        return false;
    else
    {
        return (powerof(a / 2)); 
    }
}
int main()
{
    system("cls");
    int a = 1024;
    bool yes = powerof(a);
    if (yes)
        cout << a << " is a power of 2.";
    else
        cout << a << " is not a power of 2.";
    return 0;
}