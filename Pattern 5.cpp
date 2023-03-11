#include <iostream>
using namespace std;

/* PRINT PATTERN 
    3 3 3
    2 2 2
    1 1 1  */

int main() {

    int n ;
    cin>>n;
    for (int i = n ; i>=1; i--) {
        
        for(int j = n; j>=1; j--) {
            cout<< i<<" ";
        }
    cout<<endl;
    }

}