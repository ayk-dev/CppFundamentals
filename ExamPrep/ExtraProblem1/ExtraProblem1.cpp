#include <iostream>
#include <sstream>
#include <string>
#include <list>

using namespace std;

int main()
{
    list<string> output;
    
    while (true) {
        string inp;
        getline(cin, inp);

        if (inp == "end")
            break;

        istringstream input(inp);
        string word;

        while (input >> word) {
            output.push_front(word);
        }
    }

    for (string word : output) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}

