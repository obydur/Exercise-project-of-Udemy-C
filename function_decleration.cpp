#include<iostream>
#include<conio.h>
using namespace std;

//function decleration
void addition(int x, int y)
{
    int sum = x+y;
    cout<<"sum ="<<sum<<endl;
}

//main Function decleration

int main()
{
    addition(10,20);
    addition(200,100);
    getch();
}
