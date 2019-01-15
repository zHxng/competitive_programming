#include <bits/stdc++.h>

#define MAXN 5001

using namespace std;

int N, ans = 0;
int num[MAXN], dp[MAXN];

int main() {
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        cin >> num[i];
    }
    
    for(int i = 0; i < N; i++) {
	dp[i] = 1;
				            
        for(int j = 0; j < i; j++) {
            if (num[i] > num[j])
	        dp[i] = max(dp[i], dp[j] + 1);	
	}
					            
	ans = max(ans, dp[i]);
    }		        
	
    printf("%d\n", ans);

    return 0;
}
