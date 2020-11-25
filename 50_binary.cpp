#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int ans = 0;
	int rem , p = 1;
	
	while(n>0){
		rem = n%10;
		ans = ans + rem*p;
		n = n/10;
		p = 2*p;
	}
	cout<<ans<<endl;
	return 0;
}
