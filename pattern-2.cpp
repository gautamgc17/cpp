#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	for(int i=1; i<=n; i++){
		
		for(int col=1; col<=i; col++){
			
			if(col==1 or col==i){
				cout<<i;
			}
			else{
				cout<<0;
			}
		}
		cout<<endl;
	}
	return 0;
}
