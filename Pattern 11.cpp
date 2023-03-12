#include <iostream>
using namespace std;

/* PRINT PATTERN 
            *
           ***
          *****
         *******    */

int main() {
    
    int n ;
    cin>>n;
    
    for (int i = 1 ; i<=n ; i++) {
        // MAKE THREE INNER LOOPS FOR THE SPACES, STARS AND THEN SPACE AND RELATE THE NUMBER OF SPACES AND STARS WITH THE VARIABLES
        for(int j = 1; j<=(n-i); j++) {  // SPACES
            cout<<" ";
        }
        for(int k = 1; k<=(2*i-1); k++) {  // STARS
            cout<<"*";
        }
        for(int l = 1; l<=(n-i); l++) {  // SPACES
            cout<<" ";
        }
    cout<<endl;
    }

}