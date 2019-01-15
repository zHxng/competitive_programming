#include <bits/stdc++.h>

using namespace std;
 
int N;
int c = 0;
vector<pair<int, int>> p;
 
int main() {
    while(true) {        
        cin >> N;
                                      
        if(N == 0) { break; }
                            
        c = 0;                    
        p.clear();      
        int a, b;
                  
        for(int i = 0; i < N; i++) {                        
            cin >> a >> b;                         
            p.push_back(make_pair(a, b));
        }                                     

        sort(p.begin(), p.end());
                                                                              
        for(int i = 0; i < p.size(); i++) {                               
            for(int j = i + 1; j < p.size(); j++) {                                   
                if(i == j) { continue; }                         
                         
                int x1 = p[i].first;
                int y1 = p[i].second;                    
                int x2 = p[j].first;                     
                int y2 = p[j].second;                    
                     
                int dx = x2 - x1;
                int dy = y2 - y1;
                                 
                                 
                if(binary_search(p.begin(), p.end(), make_pair(x1 + dy, y1 - dx)) && binary_search(p.begin(), p.end(), make_pair(x2 + dy, y2 - dx))) {                                                                                  
                    c++;                                                                                                                                      
                }        
            }         
        }

        cout << c / 2 << endl;    
    }

    return 0;
}
