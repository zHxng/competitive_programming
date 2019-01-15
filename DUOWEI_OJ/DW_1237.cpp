#include <bits/stdc++.h>
 
using namespace std;
 
int N;
int score[100001], dp[100001];
 
int update(int n) {    
    if(score[n] <= score[n + 1]) { return 0; }       
    
    if(score[n] > score[n + 1]) {                
        if(dp[n] <= dp[n + 1]) {
            dp[n] = dp[n + 1] + 1;
        }
    }
             
    return update(n - 1);
}
 
int main() {
    cin >> N;
                 
    for(int i = 1; i <= N; i++) {        
        cin >> score[i];
    }
              
    dp[1] = 1;
                          
    for(int i = 1; i < N; i++) {                       
        if(score[i] == score[i + 1]) {                         
            dp[i + 1] = 1;                               
        } else if(score[i] < score[i + 1]) {                        
            dp[i + 1] = dp[i] + 1;                                        
        } else if(score[i] > score[i + 1]) {
            dp[i + 1] = 1;                       
            if(dp[i] < 2) update(i);                                                                            
        }
    }
 
    int ans = 0;

    for(int i = 1; i <= N; i++) {                         
        ans += dp[i];
    }
                             
    cout << ans << endl;
                                                      
    return 0;
}
