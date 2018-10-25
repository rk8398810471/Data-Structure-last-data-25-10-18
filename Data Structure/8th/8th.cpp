

#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubblesort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

void print(int *a,int n)
{
    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" ";
    }
}

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;


       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

void inserting(int *arr,int size)
{
int insert,pos,i;
    cout<<endl<<"Enter element to be insert : ";
	cin>>insert;
	cout<<"At which position (Enter index number) ? ";
	cin>>pos;

	for(i=size; i>pos; i--)
	{
		arr[i]=arr[i-1];
	}
	arr[pos]=insert;
	cout<<"Element inserted successfully..!!\n";
	cout<<"Now the new array is : \n";
	for(i=0; i<size+1; i++)
	{
		cout<<arr[i]<<" ";
	}
}

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
    int x;
    insertionSort(a,n);
    cout<<endl<<"After sorting "<<endl;
    print(a,n);
    inserting(a,n);

}
