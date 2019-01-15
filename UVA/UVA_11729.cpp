#include <bits/stdc++.h>

using namespace std;
 
int N;
 
struct soldier {
    int first;        
    int second;
}a[1000];
 
bool cmp(soldier a, soldier b) {
  return a.second > b.second;
}
 
int main() {
    cin >> N;

    for(int i = 0; i < N; i++) {                
        cin >> a[i].first >> a[i].second;
    }

    sort(a, a+N, cmp);
                 
    int time = 0, ans = 0;
                 
    for(int i = 0; i < N; i++) {                       
        time += a[i].first;                        
        ans = max(ans, time+a[i].second);                        
    }
                           
    cout << ans << endl;
                             
    return 0;
}
