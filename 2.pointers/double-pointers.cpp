// double pointers

#include<iostream>
using namespace std;

void increment1(int **p2){
	p2 = p2 + 1;
}

void increment2(int **p2){
	*p2 = *p2 + 1;
}

void increment3(int **p2){
	**p2 = **p2 + 1;
}

int main(){
	int i = 10;
	int *p = &i;
	
	int**p2 = &p;
	
	cout<< p2 <<endl;
	cout<< &p <<endl;
	
	cout<< p <<endl;
	cout<< *p2 <<endl;
	cout<< &i <<endl;
	
	cout<< i <<endl;
	cout<< *p <<endl;
	cout<< **p2 <<endl;
	
	increment1(p2);
	cout<< p2 <<endl;       // not reflect changes
	
	increment2(p2);
	cout<< *p2 <<endl;      // reflect changes
	
	increment3(p2);
	cout<< **p2 <<endl;     // reflect changes
	
	return 0;

}
