#include <iostream>
using namespace std;

#define MAX 4
template <class T>
class StackUsingArray
{
    int top;
public:
    StackUsingArray(){
        top=-1;
    }
   T a[MAX]; //Maximum size of the Stack
    bool push(T element);
    void pop();
    bool isStackEmpty();
    
};

template <class T>
bool StackUsingArray<T>::push(T element){
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

template <class T>    
void StackUsingArray<T>::pop()
{
     if(top==-1){
         cout<<"There is no element in stack-StackUnderflow"<<endl;
     }
     else{
         cout<<"You have popped the element and element is::"<<a[top--]<<endl;
     }
}  

template <class T>
bool StackUsingArray<T>::isStackEmpty(){
    
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
    
    StackUsingArray <char> test;
    test.push('a');
    test.push('b');
    test.push('c');
    test.pop();
    test.pop();
    test.pop();
    StackUsingArray <int> test2;
    test2.push(1);
    test2.push(3);
    test2.push(4);
    test2.pop();
    test2.pop();
    test2.pop();
  
	// your code goes here
	return 0;
}
