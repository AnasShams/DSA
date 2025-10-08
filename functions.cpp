#include<iostream>
#include<stdio.h>
using namespace std;

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    int x,y,z;
    cin>>x;
    cin>>y;
    z=add(x,y);
    cout<<z;
}