#include<iostream>
using namespace std;
int main()
{
    int a[]={4,5,7,5,9,4};
    int n=sizeof(a)/sizeof(a[0]);
    int i,j;
    for(i=0;i<n;i++)
    {
        int low=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[low])
            {
                low=j;
            }

        }
        int temp=a[low];
        a[low]=a[i];
        a[i]=temp;
    }
    for(int k=0; k<n;k++)
    {
        cout<<"["<<a[k]<<","<<"]";
    }
}