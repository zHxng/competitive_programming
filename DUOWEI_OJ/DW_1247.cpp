#include <bits/stdc++.h>

using namespace std;
 
inline int setBit(int i, int idx) { return i | (1 << idx); }
 
int N, M, answer = 0;
vector<int> a, b;
 
int hashstr(string str) {
    int result = 0;
            
    for(char c : str) {              
        result = setBit(result, c - 'a');
    }
    
    return result;
}
 
int main() {
    cin >> N;
           
    for (int i = 0; i < N; i++) {                
        string str;                            
        cin >> str;
        
        a.push_back(hashstr(str));                                  
    }    
    
    cin >> M;
                   
    for (int i = 0; i < M; i++) {                        
        string str;                         
        cin >> str;
                   
        b.push_back(hashstr(str));
    }             
    
    for (int i = 0; i < N; i++) {                        
        for (int j = 0; j < M; j++) {                        
            if ((a[i] | b[j]) == (1 << 26) - 1) {
                answer++;
            }                             
        }                                    
    }
         
    cout << answer << endl;

    return 0;
}
