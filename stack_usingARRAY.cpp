#include <iostream>
#include <stack>
using namespace std;

class Stack{
//	properties
	public:
		int *arr;
		int size;
		int top;
	
//	constructor/ behavior
	Stack(int size){
		this->size = size;
		arr = new int[size];    //create array
		top = -1;             // set top function
	}
	
	void push(int element){
		if(size - top > 1){   //atleast ek elemet ki jagah ho
			top++;            //top barhado
			arr[top] = element;  //jagah hai to us pr elemet dal do
		}else{
			cout<<"stack overflow"<<endl;
		}
	}
	
	void pop(){
		if(top>=0){   // top -1  na ho bas
			top--;    //top peechay le aaoo/ kam kardo
		}
		else{
			cout<<"Stack Underflow"<<endl;
		}
	}
	
	int peek(){
		if(top>=0){         // 0 ya us se ziada ho top to return kar sakta us ka peek element
			return arr[top];
		}else{
			cout<<"Stack is empty"<<endl;
			return -1;                // esa nhi hoa to woh -1 matlab no value
		}
	}
	
	bool isEmpty(){    
		if(top==-1){      // ek bhi element na ho
			return true; 
		}else{
			return false;
		}
	}
	
};


int main(){
	Stack st(5);
	
	st.push(2);
	st.push(4);
	st.push(6);
	st.push(8);
	st.push(10);
	
	cout<<st.peek()<<endl;
	st.pop();
	
	cout<<st.peek()<<endl;
	
	st.pop();
	
	cout<<st.peek()<<endl;
	
	st.pop();
	
	cout<<st.peek()<<endl;
	
	st.pop();
	
	cout<<st.peek()<<endl;
	st.pop();
	
	cout<<st.peek()<<endl;
	
	st.pop();
	
	cout<<st.peek()<<endl;
	
	return 0;
}













