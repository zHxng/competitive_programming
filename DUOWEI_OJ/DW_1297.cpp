#include <bits/stdc++.h>
 
using namespace std;
 
int N, W;
int v[1001], w[1001];
int dp[1001][1001];
 
int main() {    
    cin >> N >> W;
        
    for(int i = 0; i < N; i++) {
        cin >> v[i] >> w[i];
    }
              
    for(int i = 0; i <=N; i++) {                    
        dp[0][i] = 0;
    }
                 
    for(int i = 1; i <= N; i++) {                        
        for(int j = 0; j <= W; j++) {                        
            if(w[i] > j) {          
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);    
            }                            
        }
    }
                          
    cout << dp[N][W] << endl;
                                      
    return 0;
}
