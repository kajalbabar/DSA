//include all the necessary header files
#include <iostream>
using namespace std;

#include "queue.h"
#include "method.h"

int main(){
        int choice , capacity,temp;
        cout << "Enter the capacity of queue: ";
        cin >> capacity;
        if(capacity <= 0) {
            exit(0);
        }
        Queue queue(capacity);


        do {
           cout << "\n********* Queue Operations **********\n\n";
           cout << "1.Enqueue \n2.Dequeue \n3.Display \n4.isEmpty \n5.isFull \n6.peek \n7.Num of elements \n8.Exit\n\n";

           cout << "Enter the operation num: ";
           cin >> choice;

           switch(choice) {

              //Enqueue
              case 1:
                      int data;
                      cout << "Enter the data to insert: ";
                      cin >> data;
                      if(queue.enqueue(data))
                            cout << "\n*** Data inserted Successfully!! ***\n";
                      else
                           cout << "\n*** Insertion failed!! Queue is full ***\n";
                      break;

              // --------------------------- Dequeue function ---------------------------
              case 2:
                      temp = queue.dequeue();
                      //when queue is empty
                      if(temp==0 && queue.isEmpty()) {
                                 cout << "\n*** Oopps! You are trying to dequeue from empty queue ***\n";
                      }

                      //
                      else {
                               cout << "\n *** Elemente Dequeued: " << temp << " ***\n";
                       }
                      break;

                // ---------------------- Display function -----------------------
              case 3:
                      queue.display();
                      break;

              //---------------------------- isEmpty() ---------------------------
              case 4:
                      if(queue.isEmpty())
                          cout << "\n*** Is Queue empty? --> YES *** \n";
                      else {
                          cout << "\n*** Is Queue empty? --> No *** \n";
                      }
                      break;

              //---------------------------- isFull() ---------------------------
              case 5:
                      if(queue.isFull())
                          cout << "\n*** Is Queue full? --> YES *** \n";
                      else {
                          cout << "\n*** Is Queue full? --> No *** \n";
                      }
                      break;

              //----------------------------- peek --------------------------------
              case 6:
                      temp = queue.peek();
                      if(!queue.isEmpty() && temp!=0)
                          cout << "\n*** Peek element from queue is: " <<  temp << " *** \n";
                      else {
                          cout << "\n*** Queue is empty *** \n";
                      }
                      break;

              //------------------------ count -------------------------------------
              case 7:
                     cout << "\n*** Number of elements in queue are: " << queue.count() << " ***\n";
                     break;

              case 8:
                     cout << "\n\n\033[1;35m THANK YOU \n";
                     break;

              default:
                      cout << "*** Wrong choice!! Try again ***\n\n";
                      break;

          }

       }while(choice !=8);

}
