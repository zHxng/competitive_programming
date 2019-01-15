#include <bits/stdc++.h>
 
using namespace std;
 
int A, B;
 
int main() {    
    cin >> A >> B;
           
    while(A + B != 0) {            
        if(A == B) {         
            cout << A << endl;
        } else {   
            cout << B + 1 << endl;
        }
        
        A = 0;
        B = 0;
              
        cin >> A >> B;
    }

    return 0;
}
