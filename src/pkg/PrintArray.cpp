#include <iostream>
using namespace std;

void PrintArrayFunction(int arr[], int size) {
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << "["<<i<<"] -> " <<arr[i] << " | ";
    }
    cout << endl;
}