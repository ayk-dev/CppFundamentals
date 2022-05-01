#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>

using namespace std;

const unsigned long system_base = 10;

unsigned long convertToNumber(const string& system, const string& numStr) {
    unsigned long result = 0;
    size_t curIndex;
    for (char symbol : numStr) {
        curIndex = system.find(symbol);
        result *= system_base;
        result += curIndex;
    }

    return result;
}

string decimalToSystem(const string& system, unsigned long number) {
    if (number == 0) {
        return string(1, system[0]);
    }

    string result = "";
    
    while (number > 0) {
        size_t idx = number % system_base;
        result = string(1, system[idx]) + result;
        
        number /= system_base;
    }
    
    return result;
}


int main()
{
    string system;
    string first;
    string second;

    cin >> system >> first >> second;

    unsigned long firstNum, secondNum;

    firstNum = convertToNumber(system, first);
    secondNum = convertToNumber(system, second);

    unsigned long result = firstNum + secondNum;

    cout << decimalToSystem(system, result) << endl;

    return 0;
}

