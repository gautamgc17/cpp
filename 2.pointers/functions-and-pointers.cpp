// functions and pointers

#include<iostream>
using namespace std;
/*
void print(int *p){
	cout << *p << endl;
}

void incrementPointer(int *p){
	p = p + 1;
}

void increment(int *p){
	(*p)++;
}

int main(){
	
	int i = 10;
	int *p = &i;
	
	print(p);
	
	cout << p <<endl;
	incrementPointer(p);   // makes copy of p and changes value ; original value is not incremented
	cout<< p <<endl;
	
	cout << *p <<endl;
	increment(p);         // original value is incremented since value is changed by pointing to variable address (pass by reference)
	cout << *p <<endl;
	
	return 0;
}*/

int sum(int a[] , int size){     // a is passed as pointer
	
	cout<< sizeof(a) <<endl;
	return 0;
}

int main(){
	
	int a[10];
	cout<< sizeof(a) <<endl;     // 40 bytes - array size
	cout<< sum(a , 10) <<endl;   // 8 bytes - pointer size
}

/*
int sum(int *a , int size){     // a is passed as pointer so dereference it to get value
	int ans = 0;
	for(int i=0; i < size; i++){
		ans += a[i];
	}
	return ans;
}

int main(){
	
	int a[10];
	cout<< sizeof(a) <<endl;     
	cout<< sum(a , 10) <<endl;   
}
*/

