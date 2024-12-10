#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int i, j, k = 6, index = 0;
    char word[] = {'Q', 'B', 'A', 'S', 'I', 'C'};
    for (i = 0; i <= 5; i++)
    {
        for (j = 0; j <= k; j++)
        {
            if (j == k)
            {
                cout << word[index];
                index++;
            }
            else
                cout << " ";
        }
        k--;
        cout << endl;
    }
    return 0;
}