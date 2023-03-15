#include <iostream>
using namespace std;

/* PRINT PATTERN 
    1
    0 1
    1 0 1
    0 1 0 1  */

int main() {

    int n ;
    cin>>n;
    
    for (int i = 1 ; i<=n ; i++) {
        
        for(int j = 1; j<=i; j++) {
            
            if ((i+j)%2==0) {
                int digit = 1;
                cout<< digit <<" ";
            }
            
            else {
                int digit = 0;
                cout<< digit <<" ";
            }
        }
    cout<<endl;
    }

}