#include <iostream>
#include <sstream>
#include <string>

using namespace std;

const size_t maxSize = 100;

int main()
{
    char inpString[maxSize+1];
    cin >> inpString;

    string alphabet("abcdefghijklmnopqrstuvwxyz");
    
    for (int idx = 0; inpString[idx] != 0; idx++) {
        char letter = inpString[idx];

        string::size_type position = alphabet.find(letter);

        if (position != string::npos) {
            alphabet.erase(position, 1);
        }
            
    }

    cout << alphabet << endl;

    return 0;

}

