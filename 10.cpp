#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	bool is_prime=true;
	cout<<"Enter the number "<<endl;
	cin>>n;
	if(n==0 || n==1){
		is_prime=false;

	}
	for(int i=2;i<=n/2;++i){
		if(n%i==0){
			is_prime=false;
			break;
		}
	}
	if(is_prime){
		cout<<n<<" is Prime Number";
	}
	else{
		cout<<n<<" is not a Prime Number";
	}
	return 0;
}