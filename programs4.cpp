#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch[5];
    cout<<"Enter a character: ";
    cin.width(5);
    cin>> ch;
    cout<<"Entered character is :"<<ch;

    getch ();
}