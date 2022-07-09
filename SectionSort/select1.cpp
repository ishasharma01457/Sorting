#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,d,n,temp,min;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"\nEnter the elements\n";

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n-1;i++)
    {
        min= i;
        for(d=i+1;d<n;d++)
        {
            if(a[min]>a[d])
            {
                min=a[d];

            }
        }

        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }

    cout<<"\nSorted list is \n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}

