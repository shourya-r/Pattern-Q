#include <iostream>
using namespace std;

/* PRINT PATTERN 
    *******
     *****
      ***
       *    */

int main() {
    
    int n ;
    cin>>n;
    
    for (int i = 1 ; i<=n ; i++) {
        // MAKE THREE INNER LOOPS FOR THE SPACES, STARS AND THEN SPACE AND RELATE THE NUMBER OF SPACES AND STARS WITH THE VARIABLES
        for(int j = 0; j<(i-1); j++) {  // SPACES
            cout<<" ";
        }
        for(int k = 1; k<=(2*n-2*i+1); k++) {  // STARS
            cout<<"*";
        }
        for(int l = 0; l<(i-1); l++) {  // SPACES
            cout<<" ";
        }
    cout<<endl;
    }

}