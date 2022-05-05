#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <list>

using namespace std;


int main()
{
    string magicItems = "aeiou";

    string input;
    getline(cin, input);

    istringstream words(input);
    string word;

    ostringstream output;

    while (words >> word) {
        string result = "";
        size_t idx;

        for (idx = 0; idx < word.length(); idx++) {
            char c = word[idx];
            size_t position = result.find(c);
            if (position == string::npos) {
                result += c;
            }
            else {
                if (c != word[idx - 1]) {
                    result += c;
                }
                else {
                    size_t magicPos = magicItems.find(c);
                    if (magicPos != string::npos)
                        result += c;
                }
                
                
            }
        }
        output << result << " ";
    }

    cout << output.str() << endl;


    return 0;
}