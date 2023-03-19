#include <iostream>
#include "sort.cpp"
#include "test.cpp"

typedef int testType ;
using namespace std ;

int main() {
    auto sortingAlgorithm = bubbleSort<testType>;

    //    testAll(sortingAlgorithm);
    testSize<testType>(30 ,sortingAlgorithm);

    system("pause");
}
