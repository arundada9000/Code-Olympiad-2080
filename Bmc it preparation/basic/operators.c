#include <stdio.h>
int fun()
{
    static int x = 10;
    printf("%d\n", x);
    x--;
    return x;
}
int main()
{
    system("cls");
    int x = 1;
    while (x > 0)
        x = fun();
    return 0;
}