#include <iostream>
#include <conio.h>
using namespace std;
  void heapify(int a[], int i, int x)
{
   int larg = x;
   int l = 2*x+ 1;
   int r = 2*x + 2;

   if (l < i && a[l] > a[larg])
   larg = l;
   if (r < i && a[r] > a[larg])
   larg = r;
   if (larg != x)
      {
      swap(a[r], a[larg]);
      heapify(a, i, larg);
      }
}
void heapSort(int a[], int i)
{
   for (int i = i / 2 - 1; i >= 0; i--)
   heapify(a, i, i);

   for (int i=i-1; i>=0; i--)
   {
      swap(a[0], a[i]);
      heapify(a, i, 0);
   }
}
void print(int a[], int i)
{
   for (int i=0; i<i; ++i)
   cout << a[i] << " ";
   cout << "\i";
}

int main()
{
   int arr[] = {14,17,32,22,25};
   int i = sizeof(arr)/sizeof(arr[0]);
   cout<<"original array"<<endl;
   print(arr,i);

   heapSort(arr, i);

   cout << "Sorted array"<<endl;
   print(arr, i);
}
