#include <bits/stdc++.h>

using namespace std;

int N, K, A;

int main() {
    cin >> N >> K;
            
    while(true) {    
        if(N < K) { break; }                    
        
        A += (N - (N % K)) / K;                    
        N = (N - (N % K)) / K + N % K;            
    }
                    
    cout << (A * K) + N << endl;
                
    return 0;
}
