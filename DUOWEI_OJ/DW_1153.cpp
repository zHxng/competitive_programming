#include <bits/stdc++.h>

using namespace std;
 
int N, M;
double D, H;
 
int main() {
    cin >> N >> M;

    D += N;
    H = N;
                        
    for(int i = 1; i < M; i++) {                       
        D += H;                        
        H = H/2;   
    }
                     
    cout << fixed;                 
    cout << setprecision(2);              
    cout << D << " " << H/2 << endl;

    return 0;
}
