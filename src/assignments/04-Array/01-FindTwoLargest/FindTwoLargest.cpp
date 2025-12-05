
#include <iostream>

#include "../../../pkg/pkg.hpp"

using namespace std;

void FindTwoLargestFunction(){
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter elements of array: " << endl;
    for (int i = 0; i < size; i++) {
        arr[i] = GetNumber();
    }
    
    PrintArrayFunction(arr, size);
    
    int firstLargest = 0;
    int secondLargest = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > secondLargest) {
            if (arr[i] > firstLargest) {
                firstLargest = arr[i];
                continue;
            }
            secondLargest = arr[i];
        }
    }

    cout << "The largest number is: " << firstLargest << endl;
    cout << "The second largest number is: " << secondLargest << endl;

    delete[] arr;


}