#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter odd even number : ";
    cin >> n;

    int sum = 0;

    if (n % 2 == 0)
    {
        cout << "Please enter a odd number.";
    }
    else
    {
        for (int i = 1; i <= n; i += 2)
        {
            sum = sum + i;
        }
        cout << "Sum of odd number is :" << sum;
    }

    getch();
}