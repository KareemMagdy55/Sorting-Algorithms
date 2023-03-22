#include <iostream>
#define sz(arr) sizeof (arr) / sizeof ( arr[0])
#define align   cout << "===============================================\n";
using namespace std;

typedef long long ll;


template<typename T>
void selectionSort(T arr[], ll size){

    for (ll i = 0; i < size; ++i) {

        T minEle = arr[i];
        ll minElePos = i ;
        for (ll j = i + 1; j < size; ++j) {

            if (arr[j] <= minEle){
                minElePos = j ;
                minEle = arr[j];
            }

        }

        swap(arr[minElePos], arr[i]);
    }
}


template<typename T>
void bubbleSort(T arr[], ll size) {

    for (ll i = 0; i < size; ++i) {

        for (int j = 0; j < size - i - 1; ++j) {

            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }


}

template<typename T>
void  insertionSort(T arr[], ll size){
    for (ll i = 0; i < size; ++i) {
        T ele = arr[i];
        ll j = i - 1;
        while (ele < arr[j] and j >= 0) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = ele;
    }

}



template<typename T>

  void merge(T arr[] , ll size, int start, int mid,int end)
  {
    T temp[size];
    for(ll i = start, j =mid+1, k=start; k<=end; k++)
    {
      if(i>mid)
      {
        temp[k] = arr[j++];
      }
      else if(j>end)
      {
        temp[k] = arr[i++];
      }
      else if(arr[i] < arr[j])
      {
        temp[k] = arr[i++];
      }
      else
      {
        temp[k] = arr[j++];
      }
    }
    for(int i=start;i<=end;i++)
    {
      arr[i] = temp[i];
    }
  }

  template<typename T>

  void merge_sort(T arr[] , ll size,int start ,int end)
  {
    if(start == end)return;
    int mid = start +(end-start)/2;
    merge_sort(arr,size , start,mid);
    merge_sort(arr,size,mid+1,end);
    merge(arr,size,start,mid,end);
  }
  template<typename T>

  void merge_sort(T arr[], ll size)
  {
    merge_sort(arr,size,0,size-1);
  }




template<typename T>
T make_pivot(T arr[], ll size ,int start,int end)
{
  int mid = start + (end-start)/2;
  T pivot = arr[mid];
  int count = 0;
  for(int i=start;i<=end;i++)
  {
    if(arr[i]<pivot)count++;
  }
  int pivot_indix = start + count;
  swap(arr[pivot_indix],arr[mid]);
  for(int s = start , e=end ; s<pivot_indix&&e>pivot_indix;s++,e-- )
  {
    while(arr[s]<pivot_indix)s++;
    while (arr[e]>pivot_indix)e--;
    if(arr[e]<pivot_indix && arr[s]>pivot_indix)swap(arr[s],arr[e]);
  }

  return pivot_indix;
}

template<typename T>
void quick_sort(T arr,ll size , int start,int end)
{
  if(start>=end)return;
  int pivot_indix = make_pivot(arr,size,start,end);
  quick_sort(arr,size,start,pivot_indix-1);
  quick_sort(arr,size,pivot_indix+1,end);
}

template<typename T>
void quick_sort(T arr, ll size)
{
  quick_sort(arr,size,0,size-1);
}