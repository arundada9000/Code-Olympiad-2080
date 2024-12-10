#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int first_cup, second_cup, size;
    int f, s;
    cout << "Enter size of first cup : ";
    cin >> first_cup; // 5
    cout << "Enter size of second cup : ";
    cin >> second_cup; // 3
    cout << "Enter the size of water to measure : ";
    cin >> size; // 4
    f = first_cup, s = second_cup;
    first_cup = 0;
    second_cup = 0;
    do
    {

        if (second_cup == 0)
        {
            second_cup = s;
            cout << "\nPoured water in second cup.";
        }

        if (first_cup == f)
        {
            first_cup = 0;
            cout << "Cleared first cup.";
        }
        else
        {
            if (first_cup + second_cup > f)
            {
                int temp = first_cup + second_cup;
                second_cup = temp - f;
                first_cup = f;
            }
            else
            {
                first_cup += second_cup;
                second_cup = 0;
            }
            cout << "\nPoured water from second cup to first cup.";
        }
        cout << "\nFirst cup " << first_cup << "l Second cup : " << second_cup << "l.";

    } while (first_cup != size);
    return 0;
}