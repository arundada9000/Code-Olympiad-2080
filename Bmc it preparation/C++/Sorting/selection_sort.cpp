#include <iostream>
using namespace std;
void selection_sort(int array[], int length)
{
    int i, j;
    int least, temp, index;
    for (i = 0; i < length; i++)
    {
        least = array[i];
        index = i;
        for (j = i + 1; j < length; j++)
        {
            if (array[j] < least)
            {
                least = array[j];
                index = j;
            }
        }
        if (i != index)
        {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
        for (int k = 0; k <= 10; k++)
            cout << array[k] << " , ";

        cout << endl;
    }
}
int main()
{
    system("cls");
    int i, j;
    int array[] = {10, 15, 20, 5, 14, 8, 9, 6, 3, 2, 1};
    int length = sizeof(array) / sizeof(array[0]);
    cout << "Length : " << length << " Original Array: \n";
    for (int i = 0; i <= 10; i++)
        cout << array[i] << " , ";
    cout << endl;
    selection_sort(array, length);

    cout << "\nAfter sorting : \n";
    for (int i = 0; i <= 10; i++)
        cout << array[i] << " , ";

    return 0;
}