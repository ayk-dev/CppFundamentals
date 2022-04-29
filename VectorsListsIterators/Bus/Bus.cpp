#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int convertTime(int time) {
    if (time > 60) {
        int minutes = time % 100;
        int hours = time / 100;
        time = hours * 60 + minutes;
    }
   
    return time;
}

int main()
{
    int busTimes;
    cin >> busTimes;

    vector<int> buses;
    buses.resize(busTimes);

    int cur;
    int militaryTime;
    for (cur = 0; cur < busTimes; cur++) {
        cin >> militaryTime;
        buses[cur] = convertTime(militaryTime);
        
    }

    int train;
    cin >> train;

    train = convertTime(train);

    int minTime = 1499;
    int minTimeIndex = 0;
    int diff;

    for (cur = 0; cur < busTimes; cur++) {
        diff = train - buses[cur];
        if (diff <= minTime) {
            minTime = diff;
            minTimeIndex = cur + 1;
        }

    }

    cout << minTimeIndex << endl;

    return 0;
}

