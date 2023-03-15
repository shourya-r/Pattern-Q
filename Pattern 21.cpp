#include <iostream>
using namespace std;

/* PRINT PATTERN 
       A
      ABA
     ABCBA
    ABCDCBA   */

int main() {

    int n ;
    cin>>n;

    for (int i = 0 ; i<n ; i++) {

        for(int k = 0; k<(n-i-1); k++) {
            cout<<" ";
        }
        char ch = 'A';
        for(int j = 1; j<=2*i+1; j++) {
            cout<<ch;
            if (j<i+1){
                ch = ch + 1;
            }
            
            if (j>=i+1) {
                ch = ch - 1;
            }
        }
        
        for(int k = 0; k<(n-i-1); k++) {
            cout<<" ";
        }
    cout<<endl;
    }

}