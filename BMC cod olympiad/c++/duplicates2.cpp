#include <iostream>
using namespace std;
int main()
{
    system("cls");
    bool repeat = false;
    int array1[] = {1, 2, 2, 2, 3, 4, 4, 5, 6, 6, 6, 6, 7, 7, 7, 7, 7, 8, 8, 9, 10, 10};
    const int len = sizeof(array1) / sizeof(array1[0]);
    int array2[len];
    int i, j, index = 0;
    cout << "Array befor removing duplicates : ";
    for (int i = 0; i < len; i++)
        cout << array1[i] << " ";
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < index; j++)
        {
            if (array2[j] == array1[i])
            {
                repeat = true;
                break;
            }
        }
        if (!repeat)
        {
            array2[index] = array1[i];
            index++;
        }
        repeat = false;
    }
    cout << "\nAfter removing duplicates : ";
    for (int i = 0; i < index; i++)
        cout << array2[i] << " ";
    return 0;
}