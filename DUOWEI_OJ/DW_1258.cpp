#include <bits/stdc++.h>

#define MAXN 0x7fffffff
 
using namespace std;
 
int N;
 
int tzero(long long n) {
    int ans = 0;
         
    while(n > 1) {         
        ans += n / 5;          
        n /= 5;         
    }
                        
    return ans;
}
 
long long bsearch(int n) {    
    bool found = false;     
            
    long long mn = 0, mx = MAXN, pos = MAXN;
                                 
    while(mn <= mx) {                        
        long long mid = (mn + mx) / 2;
                                                         
        if(tzero(mid) < n) {               
            mn = mid + 1;                    
        } else {    
            pos = min(pos, mid);    
            mx = mid-1;                    
            found = true;
        }
    }
                    
    if(!found) { return MAXN+1; }                        
    return pos;
}
 
int main(){    
    cin >> N;     
           
    for(int i = 1, in; i <= N; i++) {                
        cin >> in;
                                                 
        long long ans = bsearch(in);

        if(ans == MAXN + 1 || tzero(ans) != in) { 
            cout << "Case " << i << ": impossible" << endl;
        } else {    
            cout << "Case " << i << ": " << ans << endl;
        }            
    }
                         
    return 0;
}
