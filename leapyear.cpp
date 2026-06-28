#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    cout<< "Enter a year :";
    cin>>year;

    if (year % 4 == 0 && year % 100 != 0)
    {
        cout<<year<<" is a leapyear.";
    }
    else if (year % 400 == 0)
    {
        cout<<year<<" is a leapyear.";
    }
    else
    {
        cout<<year<<" is not leapyear.";
    }


    getch();
}