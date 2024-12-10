#include <stdio.h>
#define MAX 30
int binarySearch(int arr[], int low, int high, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int n, key;
    int arr[MAX];
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the sorted elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
    {
        printf("Key %d found at index %d\n", key, result);
    }
    else
    {
        printf("Key %d not found in the array\n", key);
    }

    return 0;
}
