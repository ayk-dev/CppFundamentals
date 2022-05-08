#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int diffCounter = 0;

    int size;
    string first, second;

    cin >> size >> first >> second;

    string result = "";

    for (size_t i = 0; i < size; i++) {
        char one = first[i];
        char two = second[i];

        if (one == two) {
            result += one;
        }
        else {
            if (((one >= 65 && one <= 90) || (one >= 97 && one <= 122)) &&
                ((two >= 65 && two <= 90) || (two >= 97 && two <= 122))) {
                if (toupper(one) == toupper(two))
                    result += toupper(one);
                else {
                    result += '!';
                    diffCounter++;
                }
            }
            else {
                result += '!';
                diffCounter++;
            }
            
        }
    }

    cout << diffCounter << endl;
    cout << result << endl;

    return 0;
}

