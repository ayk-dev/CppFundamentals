// CompareArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

const int maxSize = 200;

bool areEqual(int arr1[], int length1, int arr2[], int lenght2) {
    if (length1 != lenght2) {
        return false;
    }

    for (int i = 0; i < length1; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    
    return true;
}

bool getArray(int arr[], int & arrSize) {
    cin >> arrSize;

    if (arrSize > maxSize) {
        return false;
    }

    for (int i = 0; i < arrSize; i++) {
        cin >> arr[i];
    }

    return true;
}

int main() 
{
    int arr1size;
    int arr1[maxSize];

    if (getArray(arr1, arr1size) == false) {
        return -1;
    }

    int arr2size;
    int arr2[maxSize];

    if (getArray(arr2, arr2size) == false) {
        return -1;
    }

    if (areEqual(arr1, arr1size, arr2, arr2size)) {
        cout << "equal" << endl;
    }
    else {
        cout << "Not equal" << endl;
    }
   
}

