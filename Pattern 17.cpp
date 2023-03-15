#include <iostream>
using namespace std;

/* PRINT PATTERN 
    1
    2 3 
    4 5 6 
    7 8 9 10  */

int main() {

    int n ;
    cin>>n;
    int count = 0;
    for (int i = 1 ; i<=n ; i++) {
        
        for(int j = 0; j<i; j++) {
            
            count = count +1;
            cout<<count<<" ";
            
        }
    cout<<endl;
    }

}