
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

int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;


        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

        return binarySearch(arr, mid+1, r, x);
   }

   return -1;
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
    bubblesort(a,n);
    cout<<endl<<"After sorting "<<endl;
    print(a,n);
    cout<<endl<<"enter element to search ";
    cin>>x;
    int result = binarySearch(a, 0, n-1, x);
   (result == -1)? printf("Element is not present in array")
                 : printf("Element is present at index %d",
                                                   result);
}
