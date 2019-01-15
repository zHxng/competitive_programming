#include <bits/stdc++.h>

using namespace std;
 
int N, A;
 
int rec(int n) {
    if(N == n) {        
        return A;
    }
                 
    A += floor((1 + sqrt(1 + 8 * n)) /2);            
    return rec(n + 1);
}
 
int main() {    
    while(true) {        
        cin >> N;
                 
        if(N == 0) { break; }
                     
        A = 0;

        cout << rec(1) + 1 << endl;
    }

    return 0;
}
