// write a program to find the largest among 3 number
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the value of A "<<endl;
	cin>>a;
	cout<<"Enter the value of B "<<endl;
	cin>>b;
	cout<<"Enter the value of C "<<endl;
	cin>>c;
	if(a>b && a>c){
		cout<<"A is Greater than B & C";
	}
	else if(b>a && b>c){
		cout<<"B is Greater than A and C";
	}
	else if(c>a && c>b){
		cout<<"C is Greater than A and B";
	}
	else{
		cout<<"Enter the correct value";
	}
	return 0;
}99999999
