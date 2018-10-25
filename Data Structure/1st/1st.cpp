#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
void insert(int*,int,int);
void del(int*,int);
void show(int*);
void search(int*,int);
int size;
main()
{
int arr[20],ch,pos,ele,i;

cout<<"Enter the size of array: ";
cin>>size;

cout<<"\nEnter elements: ";
for(i=1;i<=size;i++)
{
cout<<"Arr["<<i<<"]: ";
cin>>arr[i];
}

do
{
cout<<"\n\n\nMaster Array program";
cout<<"\n1)Insert an element ";
cout<<"\n2)Delete an element ";

cout<<"\n3)Search an element ";
cout<<"\n4)Show array ";
cout<<"\n0)Exit ";
cout<<"\n\nEnter choice: ";
cin>>ch;

switch(ch)
{
case 1:
{
cout<<"\nEnter the position : ";
cin>>pos;
cout<<"\nEnter the element to enter: ";
cin>>ele;

insert(arr,pos,ele);
}
break;
case 2:
{

cout<<"\n\nEnter the position to delete: ";
cin>>pos;

del(arr,pos);
show(arr);

}
break;
case 3:
{
cout<<"\n\nEnter the element to search for : ";
cin>>ele;

search(arr,ele);
}
break;
case 4:
{
show(arr);
}
break;

case 0 : break;
default : cout<<"\n\nWrong choice...!!!!! ";
}
}while(ch!=0);
getch();
return 0;
}

void insert(int *arr,int pos,int ele)
{
int i;
for(i=size;i>=pos;i--)
{
arr[i+1]=arr[i];
}
arr[pos]=ele;
size=size+1;
}

void del(int *arr,int pos)
{ int i;
for(i=pos;i<=size;i++)
{
arr[i]=arr[i+1];
}
size=size-1;
}

void search(int *arr,int ele)
{
int i,flag=0;
for(i=1;i<=size;i++)
{
if (arr[i]==ele)

{cout<<"\n\nElement found !!!!! at position number : "<<i;
flag=1;
}
}


if(flag==0)
{
cout<<"\n\nElement not found!!!! ";
}
}



void show(int *arr)
{
int j;

cout<<"\n\nThe updated array is : ";
for(j=1;j<=size;j++)
{
cout<<arr[j]<<" , ";
}
}
