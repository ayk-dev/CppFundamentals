// demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
void incrValue(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i]++;
    }
}


int main()
{
    int arr[3] = { 2,4,6 };
    incrValue(arr, 2);

    for (int i = 0; i < 3; ++i) {
        std::cout << arr[i] << ' ';
    }

    return 0;
}

