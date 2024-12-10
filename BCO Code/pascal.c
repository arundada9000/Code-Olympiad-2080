#include <stdio.h>
int main()
{
    system("cls");
    int num = 18, count = 0;
    int mid = num + 1;
    int t = num * 2;
    int i, j;
    for (i = 0; i <= num; i++)
    {
        for (j = 0; j <= t + 1; j++)
        {
            if (i == 0 && j == mid)
                printf(" 1 ");
            else if (i >= 1)
            {
                if (j == mid - count || j == mid + count)
                    printf(" 1 ");
                else
                    printf("   ");
            }
            else
                printf("   ");
        }
        printf("\n");
        count++;
    }
    return 0;
}