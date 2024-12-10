#include <iostream>
using namespace std;
int main()
{
    system("cls");
    char name[] = "aaaaabaaaaaa";
    bool pal = true;
    int len = 0, mid;
    for (int i = 0; name[i] != '\0'; i++)
        len++;
    mid = len / 2;

    cout << "Given word is : " << name << ", length is " << len << endl;
    for (int i = 0; i < mid; i++)
    {
        if (name[i] != name[len - 1])
        {
            pal = false;
            break;
        }
        len--;
    }
    if (pal)
        cout << name << " is a palindrome.";
    else
        cout << name << " is not a palindrome.";
    return 0;
}