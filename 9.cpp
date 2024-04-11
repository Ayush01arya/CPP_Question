// write a program that can check weather a year is leap year or not
#include<bits/stdc++.h>
using namespace std;
int main(){

int num =2011;
	if(num%400==0){
		cout<<"Leap Year";



	}
	else if(num%4==0 && num%100!=0){
		cout<<"Leap Year";

	}else{
		cout<<"Not Leap Year";
	}
	return 0;
}