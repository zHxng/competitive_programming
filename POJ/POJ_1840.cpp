#include <bits/stdc++.h>

using namespace std;

int ans;
int a[5];
unordered_map<int, int> m;
 
int main() {
    for(int i = 0; i < 5; i++) {             
        cin >> a[i];
    }
         
    for(int i = -50; i <= 50; i++) {   
        int vi = i * i * i;
                                
        if(i == 0) { continue; }
                               
        for(int j = -50; j <= 50; j++) {
            int vj = j * j * j;
                            
            if(j == 0) { continue; }
                                                                                
            for(int k = -50; k <= 50; k++) {
                if(k == 0) { continue; }
                                                                                                
                int vk = k * k * k;
                int v = (a[0] * vi) + (a[1] * vj) + (a[2] * vk);
                   
                m[v]++;
            }               
        }         
    }
                  
    for(int i = -50; i <= 50; i++) {                    
        int vi = i * i * i;
                         
        if(i == 0) { continue; }
        
        for(int j = -50; j <= 50; j++) {                           
            if(j == 0) { continue; }
                                                                                         
            int vj = j * j * j;                                                             
            int v = a[3] * vi + a[4] * vj;                           
            ans += m[-v];                                  
        }                     
    }
     
    cout << ans << endl;
                         
    return 0;
}
