#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    cout<<"Emter any number :";
    cin>>a;

    (a % 2 == 0) ? cout<<a<<" is even number." : cout<<a<<" is a odd number.";

    getch();
}