#include <iostream>
using namespace std;

/* PRINT PATTERN 
    A
    A B 
    A B C 
    A B C D */

int main() {

    int n ;
    cin>>n;

    for (int i = 0 ; i<n ; i++) {
        
        for(char ch ='A'; ch<= 'A'+i; ch++) {
            cout<<ch<<" ";

        }
    cout<<endl;
    }

}