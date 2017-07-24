#include<bits/stdc++.h>

using namespace std;

int A[100000];
 void Swap ( int *a , int *b)
 {
     int t= *a;
     *a= *b;
     *b =t ;
 }
  int part(int arr[], int lo, int hi)
  {
      int x= arr[hi];
      int i=lo-1;

      for (int j=lo; j<hi ; j++)
      {
          if (arr [j] <=x)
          {
              i++;
              Swap(& arr[i], &arr[j]);

          }
      }
      Swap(&arr[i+1],  & arr[hi]);
      return i+1;
  }

  void QuickSort (int arr[], int lo,int hi)
  {
      if (lo <hi)
      {
          int mid = part(arr,lo,hi);
          QuickSort(arr,lo,mid-1);
          QuickSort(arr,mid+1,hi);
      }
  }
  int main()
  {
    int N;
    cin >> N;
    for ( int i= 1; i<= N; i++)
        cin >> A[i];
    QuickSort(A,1,N);
    for ( int i=1; i<=N;i++)
        cout << A[i] << " ";
        cout << endl;

    return 0;
}
