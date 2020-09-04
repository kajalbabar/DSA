/*
 * 	This file contain declaration of class Queue and its methods
 */


//take a class of Queue
class Queue {
      //declare front rear
    private:
      int front,rear;
      int *queue = NULL;
      int capacity;
    public:
        //non parameterized constructor
        Queue() {
            /* front: point at first position
             * rear: point the recentaly inserted element
             */
            front = rear = -1;

            //create array of fix size
            queue = (int*)calloc(sizeof(int),50);
            capacity = 50;
        }

        //parameterized constructor
        Queue(int capacity) {
                front = rear = -1;

                //create array of givem size
                queue = (int*)calloc(sizeof(int),capacity);
                this->capacity = capacity;
        }

        //method declaration
        bool enqueue(int);
        int dequeue();
        bool isFull();
        bool isEmpty();
        int count();
        int peek();
        void display();
};
