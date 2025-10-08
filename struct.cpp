#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
struct Rectangle r1={10,5};

int main()
{
    r1.length=10;
    r1.breadth=5;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    cout<<r1.length*r1.breadth;
}