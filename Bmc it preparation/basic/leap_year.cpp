#include <iostream>
using namespace std;
int main()
{
    system("Cls");
    int i, year;
    cout << "Enter the year you want to check : ";
    cin >> year;
    if (year % 4 == 0)
        cout << year << " is a leap year.";
    else
        cout << year << " is not a leap year.";

    return 0;
}