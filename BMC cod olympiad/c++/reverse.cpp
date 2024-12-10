#include <iostream>
using namespace std;
int main()
{
    system("cls");
    char name[] = "abcdef";
    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
        len++;
    len -= 1;
    cout << name;
    for (int i = 0; i < len; i++)
    {
        char temp = name[i];
        name[i] = name[len];
        name[len] = temp;
        len -= 1;
    }
    cout << " reversed is " << name;
    return 0;
}