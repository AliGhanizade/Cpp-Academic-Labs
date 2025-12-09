#include <iostream>
#include "pkg.hpp"
using namespace std;

int GetNumber(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int GetLenArray(){
    int len;
    cout << " Enter the length of the array: ";
    cin >> len;
    return len;
}

int* GetArray(int size){
    int* arr = new int[size];
    cout << " Enter " << size << " elements for the array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << " Element [" << i << "]: ";
        cin >> arr[i];
    }
    return arr;
}