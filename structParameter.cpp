#include<iostream>
#include<stdio.h>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void fun(struct Rectangle *p){
    p->length=20;
    cout<<"Length"<<p->length<<endl<<"Breadth"<<p->breadth<<endl;
}

int main()
{
    struct Rectangle r1={10,5};
    cout<<r1.length<<endl<<r1.breadth<<endl;
    fun(&r1);
    cout<<r1.length<<endl<<r1.breadth<<endl;
    return 0;
}