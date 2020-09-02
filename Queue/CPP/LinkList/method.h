/* ------------------ enqueue Method ------------------------------
 * return type: bool
 * parameter: int
 * Used to insert the data into the Queue
 * Steps:
 * 1. insert the node at the end position using rear pointer
 */

bool Queue::enqueue(int data) {

				///for inserting we need a node then create it
				Node* newNode = createNode(data);

	     //if queue is empty then insert the node at first position
	     if(isEmpty()) {
			 						front = newNode;
									rear = newNode;
									//first node is inserted .front and rear are pointing to same loc
	     }

			 //else means there are already some node i.e values in queue then out latest value
			 //should added at the end means after rear position
			 else {
				 		rear->next = newNode;				//attach the newNode after the last one
						rear = newNode;							//point the rear at recentaly added node
			 }
	     return true;
}//..

/* ---------------------- dequeue Method -----------------------------
 * return type: int
 * parameter: No parameter
 * delete the first element from the queue
 * steps:
 * 	1.check queue is empty or not
 * 	2.return the element and point the front to the succesive node
 */

int Queue:: dequeue() {

	  	int tempVal = 0;

			//If queue is not empty then only we can perform operation
			if(!isEmpty()){

					//when there is only one node in the queue then front and rear are poiting to same loc
					//delete that node
					if(front == rear) {
								tempVal = front->data;					//copy that data to return value
								delete front;										//delete the node

								//as there is only one node which is deleted make the pointer NULL
								front = NULL;
								rear = NULL;
					}
					else {

								 	Node* tempPtr = front;
									front = front->next;				 	//now front will point to the succesive node

									tempVal = tempPtr->data;			//copy the data to return it
									delete tempPtr;									//delete that node
				 }
			}
			//return the popped value
			return tempVal;
}//..


/* ------------------------- isEmpty method -------------------------
 * return type: bool
 * parameters: 0
 * return the status of queue whether it is empty or not
 * steps:
 * 	1.if front and rear are NUll least is empty
 */

bool Queue :: isEmpty() {
			if(front == NULL && rear == NULL )
			 			return true;
			else
			 		return false;
}//..


/* ------------------------- display method -------------------------
 * return type: void
 * parameters: 0
 * display all element of Queue
 */

void Queue :: display() {
		    if(isEmpty() == true)
		    			cout<<"\n\t\t\t*** Queue Underflow ***"<<endl;
		    else {
		    	     cout << "\033[0;31m";
		    	     cout << "\n\t\t\t*** Elements in Queue ***" << endl <<"\t\t";

							//queue data starts from front to rear
		    	     for(Node* tempPtr = front; tempPtr != NULL ; tempPtr = tempPtr->next) {
		    	     						cout << tempPtr -> data << "\t";
		    	     }
		    	     cout <<endl;
		    	     cout << "\033[0m";
		    }
}//..

/* ------------------------ Peek method ----------------------------
 * return type: int
 * parameter: 0
 * return the front element from queue
 */

int Queue :: peek() {
		if(!isEmpty())
			return front->data;
	  else
			return 0;
}




/* ------------------------ Count method ---------------------------
 * return type: int
 * parameter: 0
 * return the num of elements in the Queue
 */

int Queue :: count() {
		if(isEmpty())
			return 0;
	 else{
		 		int count = 0;
		 		//queue data starts from front to rear
				 for(Node* tempPtr = front; tempPtr != NULL ; tempPtr = tempPtr->next) {
										count++;
				 }
	 			return count;
			}
}
