#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    system("cls");
    int index = 0;
    string name = "Arun";
   
    for (int i = 0; name[i] != '\0'; i++)
    {
        index++;
    }
    cout << index << " number of words. \n";
    
    return 0;
}