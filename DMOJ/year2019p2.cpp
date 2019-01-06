#include <bits/stdc++.h>

#define MAXN 0xF4243
#define MAXM 0x3B9ACA03

using namespace std;

int N, M;
pair<int, int> children[MAXN];
bitset<MAXN> state;
bitset<MAXN> dp[MAXM];


void test(int idx) {
     if(idx == N + 1) return;
     
     state[idx].flip();
     state[idx] ? test(children[idx].first) : test(children[idx].second);

     return;
}

int main() {
     cin >> N >> M;
     
     children[0] = {1, 1};

     for(int i = 1, a, b; i < N + 1; i++) {
          scanf("%d %d", &a, &b);
	  children[i] = {a, b};
     }

     test(0);

     for(int i = 1; i < M; i++) {
          if(state.count() == 0) { state = dp[M % i]; break; }  
	  dp[i] = state;
	  test(0);
     }

     for(int i = 1; i < N + 1; i++) {
          printf("%d", state[i] ? 1 : 0);
     }

     printf("\n");

     return 0;
}
