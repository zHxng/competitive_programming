#include <bits/stdc++.h>

using namespace std;
 
int N = 5;
int numbers[5][5];
 
int mx(int r, int c, int dr, int dc) {
    int prod = 1;
                     
    for(int i = 0; i < 3; i++) {
        if(r > 4 || c > 4 || r < 0 || c < 0) { return -1; }
                                   
        prod = prod * numbers[r][c];                         
        r += dr;                            
        c += dc;            
    }
                             
    return prod;
}
 
int main() {     
    for(int i = 0; i < N; i++) {            
        for(int j = 0, n; j < N; j++) {                        
            cin >> n;                           
            numbers[i][j] = n;         
        }
    }
                 
    int maxProd = -1;

    for(int i = 0; i < N; i++) {                    
        for(int j = 0; j < N; j++) {                     
            for(int dr = -1; dr <= 1; dr++) {                     
                for(int dc = -1; dc <= 1; dc++) {                          
                    if(dc == 0 && dr == 0) { continue; }                                     
                                     
                    int t = mx(i, j, dr, dc);

                    if(t > maxProd) { maxProd = t; }                                    
                }                                        
            }         
        }         
    }

    cout << maxProd << endl;

    return 0;
}
