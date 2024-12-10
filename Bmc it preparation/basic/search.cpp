#include <iostream>
#include <conio.h>
using namespace std;
char names[5][10] = {"Arun", "Suju", "Jessica", "Eliz", "Pankaj"};

void fun()
{

    cout << "Enter a letter : ";
    while (1)
    {
        if (kbhit())
        {
            system("cls");
            char input = getch();
            if (input == '=')
                return;
            cout << input << endl;
            for (int i = 0; i <= 4; i++)
            {
                for (int j = 0; j <= 6; j++)
                {
                    if (names[i][j] == input)
                    {
                        cout << names[i] << endl;
                        break;
                    }
                }
            }
            cout << "Enter a letter : ";
        }
    }
}

int main()
{
    system("cls");
    fun();
    return 0;
}