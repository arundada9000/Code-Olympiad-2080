#include <iostream>
#include <vector>
using namespace std;
int main()
{
    system("cls");
    int array[] = {1, 2, 2, 2, 3, 4, 4, 5, 6};
    vector<int> ar;
    int len = sizeof(array) / sizeof(array[0]);
    int l = len, index = 0;
    cout << "Array befor removing duplicates : ";
    for (int i = 0; i < len; i++)
        cout << array[i] << " ";
    while (l > 0)
    {
        for (int i = index + 1; i < len; i++)
        {
            if (array[index] == array[i])
            {
                for (int j = i; j < len - 1; j++)
                {
                    array[j] = array[j + 1];
                }
                len--;
                i--;
            }
        }
        index++;
        l++;
    }
    cout << "\nAfter removing duplicates : ";
    for (int i = 0; i < len; i++)
        cout << array[i] << " ";
    return 0;
}