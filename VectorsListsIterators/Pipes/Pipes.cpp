#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    int pipesCount;
    cin >> pipesCount;

    vector<int> checkup;
    vector<int> installation;

    checkup.resize(pipesCount);
    installation.resize(pipesCount);

    int cur;
    for (cur = 0; cur < pipesCount; cur++) {
        cin >> checkup[cur];
    }

    for (cur = 0; cur < pipesCount; cur++) {
        cin >> installation[cur];
    }

    vector<int> lifetimes;
    lifetimes.resize(pipesCount);
    int pipeDamage;

    for (cur = 0; cur < pipesCount; cur++) {
        pipeDamage = installation[cur] - checkup[cur];
        lifetimes[cur] = installation[cur] / pipeDamage;
    }

    for (cur = 0; cur < pipesCount; cur++) {
        cout << lifetimes[cur] << " ";
    }
    cout << endl;

    return 0;
}

