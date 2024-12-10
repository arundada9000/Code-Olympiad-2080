// checking prime using recursion only 
#include <iostream>
using namespace std;
int check(int num, int a)
{
    if (a == num - 1 || num == 2)
        return 1;
    else if (num % a == 0)
        return 0;
    else
        return check(num, ++a);
}

int main()
{
    int num, a = 2;
    system("cls");
    cout << "Enter a number to check : ";
    cin >> num;
    if (check(num, a))
        cout << num << " is a prime.";
    else
        cout << num << " is not a prime.";
    return 0;
}