#include<iostream>
#define MAX 10
using namespace std;
int stack[MAX], top=-1;
void push(){
    int n ;
    cout<<"Enter the Element you want to pushed ";
    cin>>n;
    if(top==MAX-1){
        cout<<"Stack is Over Flow !!\n";
    }
    else{
        top++;
        stack[top]=n;
        cout<<"Stack Updated \n";
    }
    
}
void pop(){
    if(top==-1){
        cout<<"Stack is Under Flow\n";
    }
    else{
       int n;
       n=stack[top];
       top--;
       cout<<"Stack poped\n";
    }
    
}
void display(){
    int i;
    if(top==-1){
        cout<<"Stack is UnderFlow !\n";
    }
    else{
        for(i=top;i>=0;i--){
            cout << "Stack[" << i << "] = " << stack[i] << "\n";
        }
    }
}
int main(){
    int i;
    do{
        cout<<"Stack Operation's \n1.Push \n2.Pop \n3.Display \n4.Exit\n";
        cin>>i;
        switch(i){
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3: display();
            break;
            default:
            cout<<"Invaild Options !!\n";
            break;
        }
    }while(i!=4);
    return 0;
}
