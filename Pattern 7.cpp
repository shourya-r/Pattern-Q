#include <iostream>
using namespace std;

/* PRINT PATTERN 
    1
    1 2 
    1 2 3   */

int main() {

    int n ;
    cin>>n;
    
    for (int i = 1 ; i<=n ; i++) {
        
        for(int j = 1; j<=i; j++) {
            cout<< j<<" ";
        }
    cout<<endl;
    }

}