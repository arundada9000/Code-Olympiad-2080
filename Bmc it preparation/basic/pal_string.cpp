#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    char str[] = "naban", str2[20];
    int len = strlen(str);
    len -= 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        str2[len] = str[i];
        len--;
    }
    if (strcmp(str, str2) == 0)
    {
        cout << "The given strings are palindrome." << endl;
    }
    else
    {
        cout << "The given strings are not palindrome." << endl;
    }
    return 0;
}