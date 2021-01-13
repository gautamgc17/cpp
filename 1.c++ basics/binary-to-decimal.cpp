#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int rem , p=1 , decimal=0;
    
    int num = n;
    
    while(n>0){
        
        rem = n%10;
        decimal += rem*p;
        p = 2*p;
        n = n/10;
        
    }
    cout<<"Decimal Equivalent of "<<num<<" is: "<<decimal<<endl;
    return 0;
}
