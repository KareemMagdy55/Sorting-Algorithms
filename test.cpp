#include <iostream>
#include <functional>
#include <random>
#define align   cout << "===============================================\n";
#define printArr(arr, n) cout << "\n{ " ;for(int i = 0 ; i < (n) ; i ++) cout << arr[i] << ", "; cout << " }\n"<< endl;;


typedef long long ll;
using namespace std;

const int sizes[] = { 200, 500, 1000,5000, 10000, 20000, 50000};
const int lb = 0; // lower bound of array's elements
const int up = 1000; // upper bound of array's elements

template<class T>
T* fillArr(ll n){
    T* arr = new T[n];
    for (int i = 0; i < n; ++i) {
        long double random_double = lb + ( long double)rand() / (( long double)RAND_MAX / (up - lb));
        arr[i] = random_double ;
    }
    return arr;
}

template<class T>
void test(T arr[], ll n, const function<void(T arr[], ll n)>& sortAlgo){
    align
    cout << "Test on array size = " << n << endl;
    align

    cout << "Array before sort\n";
    printArr(arr, n);
    align

    sortAlgo(arr, n);
    cout << "Array after sort\n";
    printArr(arr, n)

    align

}
template<class T>
void mainTest(ll n, const function<void(T arr[], ll n)>& sortAlgo){
    T* arr = fillArr<T>(n);
    test(arr, n ,sortAlgo);
    delete[] arr;

}

template<class T>
void testAll(const function<void(T arr[], ll n)>& sortAlgo){
    for (auto size : sizes) {
        mainTest<T>( size, sortAlgo);
    }

}

template<class T>
void testSize(ll n, const function<void(T arr[], ll n)>& sortAlgo){
    mainTest<T>(n , sortAlgo);
}
