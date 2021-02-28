// remove consecutive duplicate characters from a string

#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicates(char arr[]){
	
	int l = strlen(arr);
	if(l==1 or l==0){
		return;
	}
	
	int prev = 0;
	// if currrent char is unique, then increment prev and place current char ; otherwise skip if same char is encountered
	for(int current=1; current < l; current++){
		if (arr[current] != arr[prev]){
			prev++;
			arr[prev] = arr[current];
		}
	}  
	arr[prev+1] = '\0';
	return;
}

int main(){
    char arr[100];
    cin.getline(arr , 100);
	removeDuplicates(arr);
	cout<<arr;
}
