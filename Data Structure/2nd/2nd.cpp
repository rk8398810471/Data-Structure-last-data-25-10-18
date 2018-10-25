#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    cout<<"enter size of array ";
    cin>>n;
    int a[n];
    cout<<"enter elements "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    int sea;
    cout<<"enter element to search ";
    cin>>sea;
    int posi,flag=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==sea)
        {
            flag=1;
            posi=i+1;
        }
    }
    if(flag==1)
    {
        cout<<"found at position "<<posi;
    }
    else
    {
        cout<<"not found "<<endl;
    }
}
