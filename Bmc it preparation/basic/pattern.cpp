#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int i, j, index = 0;
    char word[] = {'N', 'E', 'P', 'A', 'L'};
    for (i = 0; i <= 4; i++)
    {
        for (int k = 0; k <= i; k++)
            cout << word[k];

        cout << "\n";
    }
    return 0;
}