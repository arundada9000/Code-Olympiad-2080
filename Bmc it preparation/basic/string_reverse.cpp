#include <iostream>
using namespace std;
int main()
{
    system("cls");
    char name[] = "Arun";
    int index = 0, length=0;
    char eman[10];
    for (int i = 0; name[i] != '\0'; i++)
        length++;

    for (int i = length - 1; i >= 0; i--)
    {
        eman[index] = name[i];
        cout << eman[index] << endl;
        index++;
    }
    cout << "name = " << name << endl;
    cout << "reverse = " << eman << endl;
    return 0;
}