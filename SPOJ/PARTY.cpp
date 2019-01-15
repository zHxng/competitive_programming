#include <bits/stdc++.h>

using namespace std;

int W, N;
int v[101], w[101];
int dp[101][501];

int main() {

    while(true) {
        cin >> W >> N;

        if(W == 0 && N == 0) break;

        for(int i = 1; i <= N; i++) {
            cin >> w[i] >> v[i];
	}

        memset(dp, 0, sizeof dp);

        for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= W; j++) {
		    if(j >= w[i]) {
	                dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
		    } else {
                        dp[i][j] = dp[i-1][j];
		    }
	        }
	}	
		
	for(int i = W; i > 0; i--) {	
		if(dp[N][W] > dp[N][i]) {
		    cout << i + 1 << " ";
     		    break;
                }											        
        }        
	
	cout << dp[N][W] << endl;
       
	return 0;
}

