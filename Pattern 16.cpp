#include <iostream>
using namespace std;

/* PRINT PATTERN 
        1      1
        12    21
        123  321
        12344321    */

int main() {
    
    int n ;
    cin>>n;
     
    for (int i = 1 ; i<=n ; i++) {
        // WE MAKE 3 INNER LOOPS FOR FIRST CHARACTERS, SPACES AND SECOND CHARACTERS
        for (int j = 1; j<=i; j++) {
            cout<<j;
        }
        for (int k = 1; k<=2*(n-i) ; k++) {
            cout<<" ";
        }
        for (int l = i; l>=1 ; l--) {
            cout<<l;
        }
    cout<<endl;
    }
}