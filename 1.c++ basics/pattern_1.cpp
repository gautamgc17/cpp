/* For every odd numbered row print 1, odd number of times and 
For every even number row, print first and last character as 1 and rest of middle characters as 0. */

// n Rows , i th row prints i digits 
// even row prints i-2 zeroes and 2 ones while odd row prints all ones 
// new line character after every row

#include<iostream>
using namespace std;
int main(){
    int i, col, n;
    cin>>n;
    for(i=1; i<=n; i++){
        if(i%2 != 0){
            for(col=1; col<=i; col++){
                cout<<1;
            }
            cout<<endl;
        }
        else{
            cout<<1;
            for(col=1; col<=i-2; col++){
                cout<<0;
            }
            cout<<1;
            cout<<endl;
        }
    }
    return 0;
}
