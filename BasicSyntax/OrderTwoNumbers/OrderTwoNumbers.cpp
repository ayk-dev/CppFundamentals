#include <iostream>

using namespace std;

int main() 
{
	int x, y;
	cin >> x >> y;

	if (x > y) {
		cout << y << " " << x << endl;
	}
	else {
		cout << x << " " << y << endl;
	}

	return 0;
}