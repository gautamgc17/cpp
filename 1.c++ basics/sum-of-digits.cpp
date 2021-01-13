#include<iostream>
using namespace std;
int main(){
    int n, rem, sum=0;
    cin>>n;
    while(n>0){
        rem = n%10;
        sum += rem;
        n /= 10;
    }
    cout<<"Sum of Digits is: "<<sum<<endl;
    return 0;
}

