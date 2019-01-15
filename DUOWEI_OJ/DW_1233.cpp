#include <bits/stdc++.h>
  
using namespace std;
  
int N, M;
  
int count(int n) {    
    if(n % 2 == 1) { return 0; }        
    return count(n >> 1) + 1;
}
  
int main() {    
    while(true) {           
        cin >> N >> M;

        if(N == 0 && M == 0) { break; }
                                                                 
        int ans = 0;                              
                                     
        for(int i = N; i > N - M; i--) {                            
            int current = i & (-i);                             
            ans += count(current);                        
        }

        cout << ans << endl;    
    }
                 
    return 0;
}
