/*
 * 	This file cotain declaration of class and its methods
 */



//declaration of the priority queue
class PQueue {

        private:
                int data;
                int priority;
                PQueue* next;
        public:

                //non-parameterized constructor
                PQueue() {
                        data = 0;
                        priority = 0;
                        next = NULL;
                }

                //parameterized constructor
                PQueue(int data, int priority) {
                        //initilize all the instance  variables
                        this->data = data;
                        this->priority = priority;
                        next = NULL;
                }

                //method declaration
                bool enqueue(int , int);
                int getHighestPriority();
                int dequeue();
                void display();
}*Head=NULL; //..
