//include the stack and method header files
#include <iostream>
#include <stdlib.h>


using namespace std;
#include "Node.h"
#include "Stack.h"
#include "method.h"

int main() {
      //create object of stack to perform operations
      Stack stack;
      int choice;
     cout << "\033[0;31m";
     cout<<"\033[m";
      do {

           cout << "\n\t\t************* STACK OPERATIONS *************" << endl;
           cout << "\t\t\t1. Push data" << endl;
           cout << "\t\t\t2. Pop data" << endl;
           cout << "\t\t\t3. isEmpty()" << endl;
           cout << "\t\t\t4. peek()" << endl;
           cout << "\t\t\t5. Display" << endl;
           cout << "\t\t\t6. Number of elements" << endl;
           cout << "\t\t\t7.Exit" << endl;
           cout << "\n\t\t\tEnter operations num: ";
           cin  >> choice;

            switch (choice) {
              case 1:
                      int data;
                      cout << "\n\t\t\tEnter data to push in to the stack: ";
                      cin >> data;
                      cout << "\033[0;31m";

                      if(!stack.push(data))
                            cout << "\t\t\t*** Insertion failed!! stack Overflow***" << endl;

                      else
                          cout << "\n\t\t\t*** Pushed successfully!! ***" << endl;
                      cout<<"\033[m";
                      break;

              // pop element
              case 2:
                    cout << "\033[0;31m";
                    if(!stack.isEmpty())
                        cout << "\n\t\t\t*** Element Popped: " << stack.pop() << " ***\n";
                    else
		        cout << "\n\t\t\t*** Oopps! You are trying to pop from empty stack ***\n";
                    cout<<"\033[m";
                    break;

              //isEmpty:
              case 3:
                    cout << "\033[0;31m";
                    cout << "\n\t\t\t*** Is stack empty?: " << stack.isEmpty() << " ***" << endl;
                    cout<<"\033[m";
                    break;

              //peek()
              case 4:
                    cout << "\033[0;31m";
                    if(stack.isEmpty())
                          cout << "\n\t\t\t*** Stack Underflow ***\n";
                    else
                          cout << "\n\t\t\t*** Last element from stack is "<< stack.peek() << " ***" << endl;
                    cout<<"\033[m";
                    break;

              //Display
              case 5:
                    cout << "\033[0;31m";
                    stack.display();
                    cout<<"\033[m";
                    break;

              //count the num
              case 6:
                    cout << "\033[0;31m";
                    cout << "\n\t\t\t*** Number of elements in stack: "<< stack.count() << " ***"<< endl;
                    cout<<"\033[m";
                    break;

              //EXXIT
              case 7:
                    cout << "\n\t\t\t\033[1;37;43m *** THANK YOU ***\033[0m\n";
                    break;
              default:
                    cout << "\033[0;31m";
                    cout << "\n\t\t\t*** Wrong Operaton selected. Try again ***" << endl;
                    cout<<"\033[m";
                    break;
             }

      }while(choice !=7);
      return 0;
}
