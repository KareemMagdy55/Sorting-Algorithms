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