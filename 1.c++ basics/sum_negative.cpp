#include <iostream>
#include <climits>
using namespace std;
int main(){
	int n , sum = 0;
	int a = INT_MAX;
	int b = INT_MIN;
	
	for(int i=b; i<=a; i++){
		cin>>n;
		sum = sum + n;
		if(sum>=0){
			cout<<n<<endl;
		}
		else{
			break;
		}
	}
	return 0;
}


