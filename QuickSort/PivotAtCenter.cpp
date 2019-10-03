#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

void swap_func(int a, int b)
{
  a ^= b;
  b ^= a;
  a ^= b;
}

void quickSort(int arr[], int left, int right)
{

      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
      while (i <= j)
      {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j)
            {

                  swap(arr[i],arr[j]);
                  i++;
                  j--;
            }
      }

      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);

}





int main()
{
  int n;
  cin>>n;
  int *arr1;
  arr1 = new int[n];
  for(int i= 0 ; i<n;i++)
    cin>>arr1[i];
  quickSort(arr1, 0, n);
  for(int i=0 ;i<n;i++)
    cout<<arr1[i]<<"\n";
  delete [] arr1;
  return 0;
}
