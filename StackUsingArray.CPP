#include <iostream>
using namespace std;

#define MAX 4

class StackUsingArray
{
    int top;
public:
    StackUsingArray(){
        top=-1;
    }
    int a[MAX]; //Maximum size of the Stack
    bool push(int element);
    void pop();
    bool isStackEmpty();
    
};

bool StackUsingArray::push(int element){
    if(top>=MAX){
        cout<<"can not push element as maximum size limit is reached-Stack Overflow"<<"Top::"<<top<<endl;
        return 0;
    }
    else{
        
        a[++top]=element;
        cout<<"Pushed Element is::  "<<a[top]<<endl;
        return 1;
        
    }
}
    
void StackUsingArray::pop()
{
     if(top==-1){
         cout<<"There is no element in stack-StackUnderflow"<<endl;
     }
     else{
         cout<<"You have popped the element and element is::"<<a[top--]<<endl;
     }
}  

bool StackUsingArray::isStackEmpty(){
    
    if(top==-1){
        
        cout<<"Stack is Empty"<<endl;
        return true;
        
    }
    else{
        cout<<"Stack is not empty"<<endl;
        return false;
    }
    
}

int main() {
    
    StackUsingArray test;
    test.push(1);
    test.push(2);
    test.push(3);
    test.push(4);
    test.push(5);
    test.push(6);
    test.pop();
    test.pop();
    test.pop();
    test.pop();
    test.pop();
    test.pop();
    
    cout<<"Is stack is Empty"<<endl;
    test.isStackEmpty();
    test.push(20);
    test.isStackEmpty();
	// your code goes here
	return 0;
}
