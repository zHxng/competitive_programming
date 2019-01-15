#include <bits/stdc++.h>

using namespace std;

int main() {
    double sum = 0;

    for(int i = 0; i < 12; i++) {
        double currentMonth = 0;
	cin >> currentMonth;

	sum += currentMonth;
    }

    cout << "$" << (sum / 12) << endl;

    return 0;
}
