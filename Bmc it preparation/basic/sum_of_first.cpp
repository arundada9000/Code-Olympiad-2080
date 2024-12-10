#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int i, sum = 0, num;
    cout << "Enter a number : ";
    cin >> num;
    for (i = 0; i <= num; i++)
        sum += i;
    cout << "The sum upto " << num << " = " << sum;
    return 0;
}