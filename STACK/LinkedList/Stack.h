
/*
 * In this code we are going to create stack by using linked list
 * The main advantage of using linked list is that we can push as element we can
 */


//create a class of Stack in which define all var and methods for operation on Stack
class Stack  {

          private:
            Node* start;           //the starting head pointer for the stack
            Node* top ;             //this pointer for pointing the last element of the stack i.e topptr
          public:

            //Default Constructor:  assign values to the variables
            Stack() {
                  top = NULL;
                 //default create stack of capacity50
                 start = NULL;
            }

            //declare methods
            bool push(int);
            int pop();
            bool isEmpty();
            int peek();
            void display();
            int count();
};
