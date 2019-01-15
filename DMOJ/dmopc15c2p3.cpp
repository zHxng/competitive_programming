#include <bits/stdc++.h>

using namespace std;

long long N, K;
long long c = 0;
long long p = 1;

int main() {
    cin >> N >> K;
    
    while(p < N && p < K) {            
        p *= 2;                   
        c++;           
    }
        
    c += (N-p+K-1)/K;
                    
    cout << c << endl;
                                        
    return 0;
}
