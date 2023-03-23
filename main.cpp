#include <iostream>
#include "sort.cpp"
#include "test.cpp"

typedef int testType ;
using namespace std ;
using namespace sortLib;
int main() {
    auto sortingAlgorithm = quickSort<testType>;

    //    testAll(sortingAlgorithm);
    testSize<testType>(30 ,sortingAlgorithm);

    system("pause");
}
