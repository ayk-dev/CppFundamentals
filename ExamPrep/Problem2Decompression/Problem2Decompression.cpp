#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    ostringstream result;

    char current;

    string::iterator itS;
    size_t repetitions = 0;

    for (itS = input.begin(); itS != input.end(); itS++) {
        char current = *itS;
        if (current >= '0' && current <= '9') {
            
            size_t number = current - '0';
            repetitions *= 10;
            repetitions += number;

        }
        else {
            if (repetitions != 0) {
                string curStr(repetitions, current);
                result << curStr;
                repetitions = 0;
            }
            else {
                result << current;
            }
        }
    }

    cout << result.str() << endl;

    return 0;
}

