#include<iostream>
using namespace std;

int main(){
	
	// constant integers - cannot be re-assigned/overwritten 
	const int i = 12;
	int const i2 = 15;
	
	// constant reference variable from non constant integer
	int j = 9;
	const int &k = j;   // k can only be used to read but not write (k++ will throw error)
	j++;                // j can be used to write as well as read
	cout<< j << " " << k <<endl;
	
	// constant reference from a constant integer
	int const j2 = 50;
	int const &k2 = j2;
	
	// reference from a constant integer
	int const j3 = 15;           // This is a read only path
	//int &k3 = j3;              So we cannot make a writable path from read only path - Error on k3++
	
	// constant pointers
	int const x = 100;     // read only variable
	int const *y = &i;
	
	int z = 95;
	int const *pz = &z;   // pz is pointing to z
	cout<< *pz << endl;
	z++;
	cout<< *pz << endl;
	
	int m = 77;
	int m2 = 200;
	int const *n = &m;   // n is pointer to const int i.e, pointing to constant integer m, so it cannot change m but can change itself
	n = &m2;
	// (*n)++;  error - increment of read only location
	
	int * const n2 = &m;   // n2 is constant pointer to m
	(*n2)++;
	//n2++;                  error
	
	int const * const p3 = &i;    // p3 is constant pointer to integer constant 
	
}
