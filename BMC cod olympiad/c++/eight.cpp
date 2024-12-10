#include <iostream>
using namespace std;
int main()
{
    system("cls");
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int result = 0, num2 = num;
    while (num > 0)
    {
        int rem = num % 10;
        num = num / 10;
        result += rem * rem * rem;
    }
    if(num2==result)
    cout<<num2<<" is a armstrong number.";
    else
    cout<<num2<<" is not an armstrong number.";
    return 0;
}