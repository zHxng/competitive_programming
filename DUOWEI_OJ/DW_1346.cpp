#include <bits/stdc++.h>

using namespace std;
 
int main() {    
    int T;        
    cin >> T;
                       
    while(T--) {  
        int N;
        cin >> N;

        cout << ((N % 7 == 0 || N % 7 == 2) ? "NO" : "YES") << endl;
    }
}
