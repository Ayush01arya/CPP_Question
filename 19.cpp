// write a program to calcluate the product of the given number 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, pro=1;
cout<<"Enter the number ? ";
cin>>n;
while(n>0){
pro=pro*n%10;
n=n/10;
}
cout<<"Product of the code will be "<<pro;
return 0;
}


// using for loop 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n , pro=1;

cout<<"Enter the number ?";
cin>>n;
for(;n>0;n=n/10){
pro=pro*n%10;
}
cout<<"The Product will be "<<pro;
return 0;
}

