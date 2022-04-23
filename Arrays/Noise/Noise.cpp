// Noise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

// const unsigned maxSize = 3000;

int main()
{
    int number = 0;

    while (true) {
        char symbol;
        cin >> symbol;

        if (symbol == '.')
            break;

        if (symbol >= '0' && symbol <= '9') {
            number *= 10;
            number += (symbol - '0');
        }
    }

    /* with a string array:
    char str[maxSize];
    cin >> str;
 
    int number = 0;
 
    for (int i = 0; i < maxSize; i++) {
 
        char c = str[i]; 
 
        if (c == '.')
            break;
 
        if (c >= '0' && c <='9') {
            // we have a number!
            int value = (c - 48);
 
            number *= 10;
            number += value;
        }
    }
    */

    cout << sqrt(number) << endl;

    return 0;
}