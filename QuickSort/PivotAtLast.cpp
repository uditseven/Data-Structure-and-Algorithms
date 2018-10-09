#include <bits/stdc++.h>
using namespace std;

void input_func(int ptr[], int n)
{
  for(int i=0;i<n;i++)
    cin>>ptr[i];
}

void output_func(int ptr[], int n)
{
  for(int i=0;i<n;i++)
    cout<<ptr[i]<<" ";
}

void swap_func(int a, int b)
{
  a ^= b;
  b ^= a;
  a ^= b;
}

int partition(int ptr[], int left, int right)
{
  int pivot = ptr[right];
  int i = left - 1;
  int j= 0;
    for(j=left; j<right ; j++)
      if(ptr[j]<= pivot)
      {
        i++;
        swap(ptr[i], ptr[j]);
      }
  swap(ptr[i+1], ptr[right]);

  return i+1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
  int n;
  cin>>n;
  int *arr1;
  arr1 = new int[n];
  input_func(arr1, n);
  quickSort(arr1, 0, n-1);
  output_func(arr1, n);
  delete [] arr1;
  return 0;
}
