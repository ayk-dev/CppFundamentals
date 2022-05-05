#include <iostream>

using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], unsigned& arrSize) {
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
    unsigned arrSize;
    int arr[maxSize];

    getArray(arr, arrSize);

    int arrSum = 0;

    for (size_t i = 0; i < arrSize; i++) {
        arrSum += arr[i];
    }

    int arrAverage = arrSum / arrSize;

    int oddSum = 0;
    int evenSum = 0;
    for (size_t i = 0; i < arrSize; i++) {
        if (arr[i] <= arrAverage) {
            if (i % 2 == 0) {
                evenSum += arr[i];
            }
            else {
                oddSum += arr[i];
            }
            
        }
    }

    cout << evenSum * oddSum << endl;

    return 0;
}