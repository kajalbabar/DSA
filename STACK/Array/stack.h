/*
 *	This file contain all the methods of the stack 
 */

#include "stackClass.h"


/* ------------------ Push Method ------------------------------
 * return type: bool
 * parameter: int
 * Used to push the data into the stack
 * Steps:
 * 	1.check whether the stack is full then abort the insertion
 * 	2.increment the top then insert
 */

bool Stack::push(int data) {
	//first check whether the stack is full or not
	if(isFull() ==true)
		return false;

	//inc the top then add the data
	top++;
	stack[top] = data;
	return true;
}//..

/* ---------------------- Pop Method -----------------------------
 * return type: int
 * parameter: No parameter
 * Pop the last element from the stack
 * steps:
 * 	1.check stack is empty or not
 * 	2.return the element then decrement the top
 */

int Stack::pop() {
	//check empty or not
	int temp=0;
	if(isEmpty() == true)
				cout << "\n\t\t\tOopps! You are trying to pop from empty stack\n";

  else {
	     //first fetch that element
	     temp = stack[top];

	     //make the place 0 and dec the top and count of elements
	     stack[top--] = 0;
	}
	return temp;
}//..

/* ------------------------- IsFull method -------------------------
 * return type: bool
 * parameters: 0
 * return the status of stack whether it is full
 * steps:
 * 	1.if top is size-1 then it is full
 */

bool Stack::isFull() {
			if(top == size-1)
					return true;
			else
					return false;
}//..


/* ------------------------- isEmpty method -------------------------
 * return type: bool
 * parameters: 0
 * return the status of stack whether it is empty or not
 * steps:
 * 	1.if top is -1 then it is empty
 */

bool Stack::isEmpty() {
			if(top == -1)
			 	return true;
			else
			 	return false;
}//..


/* ------------------------- display method -------------------------
 * return type: void
 * parameters: 0
 * display all element of stack
 */

void Stack::display() {
		if(isEmpty() == true)
			cout<<"\n\t\t\t*** Stack Underflow ***"<<endl;
		else {
			cout << "\033[0;34m";
			cout << "\n\t\t\t*** Elements in stack ***" << endl <<"\t\t";
			for(int i=0; i<=top; i++)
				cout<<"\t"<<stack[i] <<"  ";
			cout <<endl;
		}
}//..

/* ------------------------ Peek method ----------------------------
 * return type: int
 * parameter: 0
 * return the top element from stack
 */

int Stack:: peek() {
	if(!isEmpty())
		return stack[top];
}




/* ------------------------ Count method ---------------------------
 * return type: int
 * parameter: 0
 * return the num of elements in the stack
 */
int Stack::count() {
	if(isEmpty())
		return 0;
	else
		return top+1;
}
