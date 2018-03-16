#include <iostream>
#include <stack>
using namespace std;

#define MAX 4
template<class T>
void showStack(stack<T> st){
    
    stack<T> stk= st;
    while(!stk.empty()){
        
        cout << '\t' << stk.top();
        stk.pop();
    }
    cout<<"\n";
    
}

int main() {
    
    stack<int> st1;
    stack<char> st2;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st2.push('a');
    st2.push('b');
    st2.push('c');
    showStack(st1);
    showStack(st2);
  
	// your code goes here
	return 0;
}
