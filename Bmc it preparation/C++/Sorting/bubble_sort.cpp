#include <iostream>
using namespace std;
void bubble_sort(int array[], int length)
{
    int i, j;

    for (i = 0; i < length - 1; i++)
    {
        for (j = 0; j < length - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
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
    int array[] = {9, 4, 2, 1, 3, 5, 7};
    int length = sizeof(array) / sizeof(array[0]);
    cout << "Length : " << length << " Original Array: \n";
    for (int i = 0; i <= 10; i++)
        cout << array[i] << " , ";
    cout << endl;

    bubble_sort(array, length);

    cout << "\nAfter sorting : \n";
    for (int i = 0; i <= 10; i++)
        cout << array[i] << " , ";

    return 0;
}