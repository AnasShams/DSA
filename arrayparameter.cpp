#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int a[])
{
    cout<<sizeof(a)/sizeof(int)<<endl;
};

int main()
{
    int a[]={1,2,3,4,5};
    int n=5;
    fun(a);
    for(int x:a)
    {
        cout<<x<<" ";
    }
}