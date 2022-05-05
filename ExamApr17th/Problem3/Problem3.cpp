#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <cmath>

using namespace std;

long int getTheLastNum(vector<long int>& nums) {
    long int result;
    size_t lastIdx = nums.size() - 1;
    result = nums[lastIdx];
    nums.pop_back();
    return result;
}

void printNumbers(vector<long int>& nums) {
    for (long int num : nums)
        cout << num << endl;
}


int main()
{
    vector<long int> numbers;
    long int firstNum, secondNum;

    while (true) {
        string input;
        cin >> input;

        if (input == "end")
            break;

        if (input == "sum") {

            firstNum = getTheLastNum(numbers);
            secondNum = getTheLastNum(numbers);

            long int sum = firstNum + secondNum;
            // cout << "1st num " << firstNum << ", 2nd num " << secondNum << ", sum = " << sum << endl;
            numbers.push_back(sum);

        }
        else if (input == "subtract") {

            firstNum = getTheLastNum(numbers);
            secondNum = getTheLastNum(numbers);

            long int subtr = firstNum - secondNum;
            // cout << "1st num " << firstNum << ", 2nd num " << secondNum << ", subtraction = " << subtr << endl;
            numbers.push_back(subtr);

        }
        else if (input == "concat") {

            firstNum = getTheLastNum(numbers);
            secondNum = getTheLastNum(numbers);
            if (firstNum < 0)
                // numbers.push_back(secondNum);
                // numbers.push_back(firstNum);
                continue;
            
            string result = to_string(secondNum) + to_string(firstNum);
            numbers.push_back(stoi(result));
        
        }
        else if (input == "discard") {
            numbers.pop_back();
        }
        else {
            long int num = stoi(input);
            numbers.push_back(num);

        }
    }

    printNumbers(numbers);

    return 0;
}