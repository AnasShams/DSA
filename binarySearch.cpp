#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a[7]={2,4,6,8,10,12,14};
    int x=12;
    int low=0;
    int high=sizeof(a)/sizeof(a[0]);
    int mid=(low+high)/2;

    while(true)
    {
        mid=(low+high)/2;
        if(x==a[mid])
        {
            cout<<"Your key value is at "<<mid<<" position"<<endl;
            break;
        }
        else if(x>a[mid])
        {
            low=mid+1;
        
        }
        else{
            high=mid-1;
        }
        
    }

}