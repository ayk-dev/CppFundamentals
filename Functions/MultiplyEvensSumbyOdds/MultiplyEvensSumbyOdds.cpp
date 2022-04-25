// MultiplyEvensSumbyOdds.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int multiplyEvenAndOddDigits(int num) {
    int sumEvenDigits = 0;
    int sumOddDigits = 0;

    while (abs(num) > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            sumEvenDigits += digit;
        }
        else {
            sumOddDigits += digit;
        }

        num /= 10;
    }

    int result = sumEvenDigits * sumOddDigits;
    return result;
}

int main()
{
    int number;
    cin >> number;

    cout << multiplyEvenAndOddDigits(number) << endl;

    return 0;
}

