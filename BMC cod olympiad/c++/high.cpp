#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            cout << i << " X " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
    return 0;
}