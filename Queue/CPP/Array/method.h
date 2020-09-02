/* ------------------ enqueue Method ------------------------------
 * return type: bool
 * parameter: int
 * Used to insert the data into the Queue
 * Steps:
 * 	1.check whether the queue is full if yes then abort the insertion
 * 	2.increment the rear then insert at rear position
 */

bool Queue::enqueue(int data) {
	//first check whether the queue is full or not
	if(isFull() == true) {
		  return false;
		}


  //inc the rear to point the next empty space then insert

	 if(front > rear)
			front = rear = -1;
	 //if queue is empty then inc the front as it is -1
   if(front == -1)
        front = 0;


   queue[++rear] = data;
	 cout << front << "   "<<rear << endl;
	 return true;
}//..

/* ---------------------- dequeue Method -----------------------------
 * return type: int
 * parameter: No parameter
 * delete  the first element from the queue
 * steps:
 * 	1.check queue is empty or not
 * 	2.return the element then inc the front
 */

int Queue:: dequeue() {
	   	//check empty or not
	  	int temp=0;

			if(!isEmpty()){
	  	      //first fetch that element
	  	      temp = queue[front];

	  	      //place 0 at that position and inc the front
	          queue[front++] = 0;
			}
			if(front > rear)
					front = rear = -1;
			return temp;
}//..

/* ------------------------- IsFull method -------------------------
 * return type: bool
 * parameters: 0
 * return the status of queue whether it is full
 * steps:
 * 	1.if front is at 0 and rear is at n-1 then queue is full
 */

bool Queue :: isFull() {
			if(rear+1 == capacity)
					return true;
			else
					return false;
}//..


/* ------------------------- isEmpty method -------------------------
 * return type: bool
 * parameters: 0
 * return the status of queue whether it is empty or not
 * steps:
 * 	1.if rear is at  than rear then it is empty
 */

bool Queue :: isEmpty() {
			if( (front ==-1 && rear ==-1) || front > rear )
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
			for(int i=front; i<=rear; i++)
				cout<< "\t" << queue[i] <<"  ";
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
			return queue[front];
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
		 		for(int i=front; i<=rear; i++) {
						count++;
				}
	 			return count;
			}
}
