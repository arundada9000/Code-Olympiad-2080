#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 6, 7, 8, 2};
    int len = 5;
    cout << "array 1 : ";
    int arrdup[5], index = 0;
    for (int k = 0; k <= 4; k++)
        cout << arr1[k] << " ";
    cout << endl;
    cout << "array 2 : ";
    for (int k = 0; k <= 4; k++)
        cout << arr2[k] << " ";
    cout << endl;
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arrdup[index] = arr1[i];
                index++;
            }
        }
    }
    cout << "Intersections in given arrays : ";
    for (int k = 0; k < index; k++)
        cout << arrdup[k] << " ";
    return 0;
}