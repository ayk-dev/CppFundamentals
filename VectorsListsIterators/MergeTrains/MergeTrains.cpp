#include <iostream>
#include <list>
#include <cmath>
#include <sstream>

using namespace std;

void readTrain(list<int> & track) {
    string buf;
    getline(cin, buf);

    istringstream sbuf(buf);
    int car;

    while (sbuf >> car) {
        track.push_front(car);
    }
}

void printTrain(list<int>& track) {
    for (int car : track)
        cout << car << " ";
    cout << endl;
}

int main()
{
    list<int> trackA;
    list<int> trackB;
    list<int> merged;
    string mergingSteps = "";

    readTrain(trackA);
    readTrain(trackB);

    list<int>::iterator itA = trackA.begin();
    list<int>::iterator itB = trackB.begin();

    while (itA != trackA.end() || itB != trackB.end()) {
        if (itA != trackA.end() && itB != trackB.end()) {
            if (*itA < *itB) {
                mergingSteps += 'A';
                merged.push_front(*itA);
                itA++;
            }
            else {
                mergingSteps += 'B';
                merged.push_front(*itB);
                itB++;
            }
        }
        else {
            if (itA != trackA.end()) {
                mergingSteps += 'A';
                merged.push_front(*itA);
                itA++;
            }
            else {
                mergingSteps += 'B';
                merged.push_front(*itB);
                itB++;
            }
        }
    }

    cout << mergingSteps << endl;
    printTrain(merged);


    return 0;
}

