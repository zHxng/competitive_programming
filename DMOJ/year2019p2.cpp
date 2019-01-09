#include <bits/stdc++.h>

#define MAXN 0xF4242

using namespace std;

int N, M;
pair<int, int> children[MAXN];
bool state[MAXN];
int height[MAXN];
    
void sim() {
    int idx = 1;

    while(idx != N + 1) {
        state[idx] ^= 1;
        if(state[idx]) idx = children[idx].first;
        else idx = children[idx].second;
    }
}

int max_height(int idx) {
    if(idx == N + 1) return 0;
    if(height[idx] != 0) return height[idx];
    if(children[idx].first == children[idx].second && children[idx].first != N + 1) return max_height(children[idx].first);
     
    int ans = max(max_height(children[idx].first), max_height(children[idx].second)) + 1;
    height[idx] = ans;
    return ans;
}

int main() {
    scanf("%d%d", &N, &M);

    for(int i = 1, a, b; i < N + 1; i++) {
        scanf("%d%d", &a, &b);
        children[i] = make_pair(a, b);
    }

    memset(height, 0, sizeof height);
    memset(state, 0, sizeof state);

    int cyc = M % (1 << max_height(1));
     
    for(int i = 0; i < cyc; i++) {
        sim();
    }

    for(int i = 1; i < N + 1; i++) {
        printf("%d", state[i]);
    }

    printf("\n");
}
