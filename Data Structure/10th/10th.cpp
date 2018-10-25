
#include<iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;


    while (i<n1 && j <n2)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n1)
        arr3[k++] = arr1[i++];
    while (j < n2)
        arr3[k++] = arr2[j++];
}


int main()
{
    int n1;
    int n2;
    int arr1[n1];
    int arr2[n2];
    cout<<"enter size of array 1 ";
    cin>>n1;
     for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter size of array 2 ";
    cin>>n2;


    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=i+1;j<n1;j++)
        {
            if(arr1[i]>arr1[j])
            {
                int t=arr1[i];
                arr1[i]=arr1[j];
                arr1[j]=t;
            }
        }
    }

  for(int i=0;i<n2;i++)
    {
        for(int j=i+1;j<n2;j++)
        {
            if(arr2[i]>arr2[j])
            {
                int t=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=t;
            }
        }
    }

  cout<<"first array after sort "<<endl;
  for(int i=0;i<n1;i++)
  {
      cout<<arr1[i]<<" ";
  }
  cout<<endl<<"second array after sort "<<endl;
  for(int i=0;i<n2;i++)
{
    cout<<arr2[i]<<" ";
}
cout<<endl;
    int arr3[n1+n2];
    mergeArrays(arr1, arr2, n1, n2, arr3);

    cout << "Array after merging" <<endl;
    for (int i=0; i < n1+n2; i++)
        cout << arr3[i] << " ";

    return 0;
}
