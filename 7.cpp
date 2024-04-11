// write program to check a weather a number is odd or even
#include <bits/stdc++.h>
using namespace std ;
int main(){
	int a;
	cout<<"Enter the number "<<endl;
	cin>>a;
	if(a%2==0){
		cout<<a<<" is Even";

	}
	else if (a%2!=0){
		cout<<a<<" is Odd";
	}
	else{
		cout<<"Wrong Input !!";
	}
	return 0;
}