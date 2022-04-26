#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isCorrect(string expr) {
    istringstream stream(expr);
    char c;
    int depth = 0;

    while (stream >> c) {
        switch (c) {
            case '(': depth++; break;
            case ')': depth--; break;
            default: break;
        }
    }

    if (depth == 0)
        return true;
    else
        return false;
}

int main()
{
    string expression;
    getline(cin, expression);

    cout << (isCorrect(expression) ? "correct" : "incorrect") << endl;


    return 0;
}

