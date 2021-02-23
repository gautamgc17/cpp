#include<iostream>
using namespace std;

void func(int a , int b[] , int n){
	a++;
	b[0]++;
}
int main(){
	
	int a = 10;
	int arr[10] = {1,2,3};
	cout<<"a = "<<a<<endl;
	cout<<"arr[0] = "<<arr[0]<<endl;
	
	func(a , arr , 10);
	
	cout<<"After function call a = "<<a<<endl;
	cout<<"After function call arr[0] = "<<arr[0]<<endl;
	
}
