
//take a class of Queue
class Queue {

   private:
     //front: poiting start of the queue and it will point next node when node will get deleted
     //rear:  rear for inserting the data at the end of queue
      Node *front,*rear;

    public:
        //non parameterized constructor
        Queue() {
            /* front: point at first position
             * rear: point the recentaly inserted element
             */
            front = rear = NULL;
        }

        //destructor free all the space when object's scope will end
        ~Queue() {
               Node* tempPtr = front, *tempDel;
               while(tempPtr!=NULL ) {
                        tempDel = tempPtr;        //store address of current node
                        tempPtr = tempPtr->next;  //move tempPtr to next node
                        delete tempDel;                  //delete the current node

               }

        }

        //method declaration
        bool enqueue(int);
        int dequeue();
        bool isEmpty();
        int count();
        int peek();
        void display();
};
