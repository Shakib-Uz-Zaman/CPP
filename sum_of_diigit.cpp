#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int number,rem,temp;
    int sum = 0;
    cout<<"Enter a digit of number :";
    cin>>number;

    temp = number;


    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10; 
    }
    cout<<"Sum of digit :"<<sum;



    getch();
}