#include <bits/stdc++.h>
 
using namespace std;
 
int N;
 
int main(){
    cin >> N;
                    
    int P, D;         
    int gn[2000];         
    queue<int> q;             
    vector<int> v[2000];
                                          
    for(int cse = 0; cse < N; cse++) {                             
        cin >> P >> D;
                                      
        for(int i = 0, a, b; i < D; i++) {                             
            cin >> a >> b;
                                          
            v[a].push_back(b);
            v[b].push_back(a);                            
        }                                        
           
        memset(gn, -1, sizeof gn);

        gn[0] = 0;
        q.push(0);
                                                                                           
        while(!q.empty()) {              
            int current = q.front();               
            q.pop();
                                                                                                                                                 
            for(int j = 0; j < v[current].size(); j++) {                                       
                if(gn[v[current][j]] == -1) {                        
                    gn[v[current][j]] = gn[current] + 1;
                    q.push(v[current][j]);    
                }                              
            }             
        }
                                                                                         
        for(int j = 1; j < P; j++) {
            cout << gn[j] << endl;                                       
        }    
    }

    return 0;
}
