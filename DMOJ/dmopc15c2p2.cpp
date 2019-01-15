#include <bits/stdc++.h>

using namespace std;

int N, A, B;
int D1[200], D2[200];

int main(){
    cin >> N;
              
    for(int i = 0; i < N; i++) {        
        cin >> D1[i];
    }
                          
    for(int i = 0; i < N; i++) {                    
        cin >> D2[i];
    }                
     
    for(int i = 0; i < N; i++) {                       
        if(D1[i] > D2[i]) {               
            A++;
        } else if(D1[i] < D2[i]) {                   
            B++; 
        }
    }                
       
    cout << A << " " << B << endl;
                             
    if(A > B) {    
        cout << "Xyene";
    } else if(A < B) {
        cout << "FatalEagle";
    } else if(A == B) {               
        cout << "Tie";
    }
                                        
    return 0;
}
