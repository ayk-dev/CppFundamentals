#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const unsigned maxSize = 200;

bool getArray(int arr[], int& arrSize) {
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
    int arrSize;
    int arr[maxSize];

    getArray(arr, arrSize);

    double arrSum = 0;
    for (size_t i = 0; i < arrSize; i++) {
        arrSum += arr[i];
    }

    double average = arrSum / arrSize;

    sort(arr, arr + arrSize, greater<int>());

    vector<int> outputArray;
    for (int i = 0; i < arrSize; i++) {
        if ((arr[i] < average) && (arr[i] % 2 == 0)) {
            outputArray.push_back(arr[i]);
        }
    }

    int size = outputArray.size();
    if (size > 0) {
        for (int i = 0; i < size; i++) {
            cout << outputArray[i] << " ";
        }

        cout << endl;
    }
    else {
        cout << "No" << endl;
    }



    return 0;
}

