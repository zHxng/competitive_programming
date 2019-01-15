#include <bits/stdc++.h>

using namespace std;

int N;

bool decreasing(vector<int> _arr) {
    if(_arr.size() <= 1) { return true; }
    if(_arr[0] >= _arr[1]) { return false; }

    _arr.erase(_arr.begin());
    return decreasing(_arr);
}

int main() {
    cin >> N;

    vector<int> arr;

    for(int i = 0 ; i < N; i++) {
        int a;
        cin >> a;

        arr.push_back(a);
    }

    if(decreasing(arr)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
