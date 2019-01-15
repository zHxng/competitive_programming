#include <bits/stdc++.h>

using namespace std;

int erosion(double x, double y) {
    int year = 0;

    while(true) {
        double radius = sqrt(((year -1) * 100) / 3.14);
        double distance = sqrt(pow(abs(x), 2) + pow(abs(y), 2));

	if(distance <= radius) return year;

	year++;
    }
}

int main() {
    int n = 0;
    cin >> n;

    for(int i = =; i < n; i++) {
        double x, y;
	cin >> x >> y;

	cout << "Property " << (i + 1) << ": This property will being eroding in year " << erosion(x, y) - 1 << "." <<endl;
    }

    cout << "END OF OUTPUT." << endl;

    return 0;
}
	
