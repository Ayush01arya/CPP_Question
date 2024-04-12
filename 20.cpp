// write a progrma that can calculate the factorial of the given number 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int fact=1,n;
    cout<<"Enter the number ";
    cin>>n;
    for(int i =1;i<=n;i++){
        fact*=i;
    }
    cout<<"Factorial will be "<<fact;
    return 0;
}
