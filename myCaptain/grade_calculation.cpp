#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	float mark[7],sum=0,percent=0;
	cout<<"Enter number of Subjects:";
	cin>>n;
	cout<<"The marks in "<<n<<" subjects are:\n";
	for(i=0;i<n;i++)
	{
		cin>>mark[i];
		sum=sum+mark[i];
	}
	percent=sum/n;
	cout<<"Your grade is:";
	if(percent>=85)
	cout<<"A";
	else if(percent<85 && percent>=70)
	cout<<"B";
	else if(percent<70 && percent>=55)
	cout<<"C";
	else if(percent<55 && percent>=40)
	cout<<"D";
	else
	cout<<"Fail";
    return 0; 
}

