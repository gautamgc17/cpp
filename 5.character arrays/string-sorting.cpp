#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

/* We can also write our own comparator function and pass it as a third parameter. This “comparator” function returns a value; 
convertible to bool, which basically tells whether the passed “first” argument should be placed before the passed “second” argument or not. */
bool compare(string a , string b){
	if (a.length() == b.length()){
		return a<b;
	}
	return a.length() > b.length();
}
int main(){
	int n;
	cin>>n;
	cin.get();
	
	string s[10];  // vector
	
	for(int i=0; i<n; i++){
		getline(cin , s[i]);
	}
	
	/* first parameter is the point of the array/vector from where the sorting needs to begin and 
	second parameter being the length up to which we want the array/vector to get sorted. */
	
	sort(s , s+n , compare);               
	
	for(int i=0; i<n; i++){
		cout<<s[i]<<endl;
	}
		
}
