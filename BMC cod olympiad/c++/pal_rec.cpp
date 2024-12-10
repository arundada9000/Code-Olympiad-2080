#include <iostream>
using namespace std;
void check(char name[], int len, int index)
{
    if (len < index)
        cout << name << " is a palindrome.";
    else
    {
        if (name[index] != name[len - 1])
            cout << name << " is not a palindrome.";
        else
            return check(name, len - 1, index + 1);
    }
}
int main()
{
    system("cls");
    char name[] = "12344321";
    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
        len++;
    check(name, len, 0);
    return 0;
}