/*
 * Stack data structure using CPP
 * 	Class Defination of the Stack class
 * 	all methods and constructor is declared here
 */


//create a class of Stack in which define all var and methods for operation on Stack
class Stack  {
          private:
            int top;          //int top
            int *stack;       //create a pointer  to point the Stack
            int size;            //for number of elements

          public:

            //Default Constructor:  assign values to the variables
            Stack() {
                 top = -1;
                 //default create stack of size 50
                 stack = (int*)calloc(sizeof(int), 50);
                 size = 50;
            }

            //parameterized Constructor: Initilize values
            Stack(int size) {
                  top = -1;
                  stack = (int*)calloc(sizeof(int), size);
                  this->size = size;
            }

            //declare methods
            bool push(int);
            int pop();
            bool isEmpty();
            bool isFull();
            int peek();
            void display();
            int count();
}; //..
