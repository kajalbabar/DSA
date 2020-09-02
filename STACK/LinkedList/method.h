/* ------------------ Push Method ------------------------------
 * return type: bool
 * parameter: int
 * Used to push the data into the stack
 * Steps:
 * 	1.insert the node at the end of the list
 */

bool Stack::push(int data) {
		//create a one node
		Node* newNode = createNode(data);

		//if stack is empty then insert at first position
		if(start == NULL) {
					start = newNode;
					top = newNode;
		}
		//else add the element at the top of the stack
		else {
					top->next = newNode;					//add newNode at the top means end
					top = newNode;					//then point  the top to the last element
		}
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
				//if stack is empty then return
				if(isEmpty() == true)
	      			cout << "\n\t\t\tOopps! You are trying to pop from empty stack\n";

        else {
	           //now our top ha last node la point kart asnar mg aplyla to node pop karych ahe ani top previous la point karycha ahe
						 //apan directly top la remove nahi karu shakt as aplyla previos element cha address mhitit pahije so ek ajun pointer ghycha ani to tychya agodar anun thevycha

						 Node* tempPtr = start;

						 //if there is only one node then we have to change the starting pointer so seperate
						 //condition for it

						 if(tempPtr->next == NULL) {
							 		start = NULL;
								  temp = tempPtr->data;
									delete tempPtr;
						 }
						 else {
						      while(tempPtr->next !=top)
						     	 		tempPtr = tempPtr->next;

						      //retrive the data of top
						      temp = top->data;

						      //free the top
						      delete top;

						      //then point the top to the previous element
						      top = tempPtr;

						      //ata last node tr delete zala mg tychya address previous kade hota to pn remove karycha
						      top->next = NULL;
			   	}
			}
	      return temp;
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

			for(Node* tempPtr = start; tempPtr!= NULL; tempPtr =tempPtr->next) {
									cout << tempPtr -> data << "\t";
			}
			cout <<endl;
		}
}//..

/* ------------------------- isEmpty method -------------------------
 * return type: bool
 * parameters: 0
 * return the status of stack whether it is empty or not
 * steps:
 * 	1.start is NULL then  there are no element in the list so stack is empty
 */

bool Stack :: isEmpty() {
			if(start == NULL)
			 	return true;
			else
			 	return false;
}//..



/* ------------------------ Peek method ----------------------------
 * return type: int
 * parameter: 0
 * return the top element from stack
 */

int Stack:: peek() {
		if(!isEmpty())
				return top->data;
}




/* ------------------------ Count method ---------------------------
 * return type: int
 * parameter: 0
 * return the num of elements in the stack
 */
int Stack::count() {
	       if(isEmpty())
	       	return 0;
	       else {
					 	int count = 0;
					 	for(Node* tempPtr = start; tempPtr != NULL; tempPtr = tempPtr->next) {
												count++;
						}
						return count;
			   }
}
