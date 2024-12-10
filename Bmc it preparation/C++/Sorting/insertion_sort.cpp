#include <iostream>
using namespace std;
void show(int array[], int length)
{
    int i;
    for (int i = 0; i < length; i++)
    {
        cout << array[i];
        if (i < length - 1)
            cout << " , ";
    }
}
void insertion_sort(int array[], int length)
{
    int i, j, temp;
    for (i = 1; i < length; i++)
    {
        temp = array[i];
        j = i - 1;
        while (temp < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = temp;

        show(array, length);

        cout << endl;
    }
}

int main()
{
    system("cls");
    int i, j;
    int array[] = {25, 57, 48, 37, 12, 92, 86, 33};
    int length = sizeof(array) / sizeof(array[0]);
    cout << "Length : " << length << " Original Array: \n";
    show(array, length);
    cout << endl;

    insertion_sort(array, length);

    cout << "\nAfter sorting : \n";
    show(array, length);

    return 0;
}