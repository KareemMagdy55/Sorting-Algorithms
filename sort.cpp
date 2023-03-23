#include <iostream>
#include <algorithm>
#include <cstring>
#define sz(arr) sizeof (arr) / sizeof ( arr[0])
#define align   cout << "===============================================\n";
using namespace std;

typedef long long ll;

namespace sortLib {
    template<typename T>
    void selectionSort(T arr[], ll size) {

        for (ll i = 0; i < size; ++i) {

            T minEle = arr[i];
            ll minElePos = i;
            for (ll j = i + 1; j < size; ++j) {

                if (arr[j] <= minEle) {
                    minElePos = j;
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

                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }


    }

    template<typename T>
    void insertionSort(T arr[], ll size) {
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

    void merge(T arr[], ll size, int start, int mid, int end) {
        T temp[size];
        for (ll i = start, j = mid + 1, k = start; k <= end; k++) {
            if (i > mid) {
                temp[k] = arr[j++];
            } else if (j > end) {
                temp[k] = arr[i++];
            } else if (arr[i] < arr[j]) {
                temp[k] = arr[i++];
            } else {
                temp[k] = arr[j++];
            }
        }
        for (int i = start; i <= end; i++) {
            arr[i] = temp[i];
        }
    }

    template<typename T>

    void merge_sort(T arr[], ll size, int start, int end) {
        if (start == end)return;
        int mid = start + (end - start) / 2;
        merge_sort(arr, size, start, mid);
        merge_sort(arr, size, mid + 1, end);
        merge(arr, size, start, mid, end);
    }

    template<typename T>

    void mergeSort(T arr[], ll size) {
        merge_sort(arr, size, 0, size - 1);
    }


    template<typename T>
    int make_pivot(T arr[], ll size ,int start,int end)
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
        for (int s = start, e = end; s < pivot_indix && e > pivot_indix;) {
            if (arr[s]<pivot)s++;
            else if(arr[e]>pivot)e--;
            else {
                swap(arr[s++],arr[e--]);
            }
        }

        return pivot_indix;
    }


    template<typename T>
    void quick_sort(T arr[],ll size , int start,int end)
    {
        if(start>=end)return;
        int pivot_indix = make_pivot(arr,size,start,end);
        quick_sort(arr,size,start,pivot_indix-1);
        quick_sort(arr,size,pivot_indix+1,end);
    }

    template<typename T>
    void quickSort(T arr[], ll size)
    {
        quick_sort(arr,size,0,size-1);
    }



    template<typename T>
    void shellSort (T arr[], int size){
        int increment = size/2;
        while (increment) {
            for (int i = increment; i < size; ++i) {
                T ele = arr[i];
                int j = i - increment;
                while (ele < arr[j] and j >= 0) {
                    arr[j + increment] = arr[j];
                    j -= increment;
                }
                arr[j + increment] = ele;
            }
            increment /= 2;
        }
    }




    template<typename T>
    void countSort(T arr[], int size) {
        int max = *std::max_element(arr, arr + size);
        int min = *std::min_element(arr, arr + size);

        int count_size = max - min + 1;
        int count[count_size];
        memset(count, 0, sizeof(count)); // initialize count array with zeros
        for (int i = 0; i < size; ++i) {
            count[arr[i] - min]++;
        }
        for (int i = 1; i < count_size; ++i) {
            count[i] += count[i - 1];
        }

        // create result array
        T res[size];
        for (int i = size - 1; i >= 0; --i) {
            res[count[arr[i] - min] - 1] = arr[i];
            count[arr[i] - min]--;
        }
        for (int i = 0; i < size; ++i) {
            arr[i] = res[i];
        }
    }

}