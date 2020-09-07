/*
 * 	This file contain the driver program which is used to call all the functionality of priority queue
 */

#include <iostream>
using namespace std;

#include "priority_queue.h"

int main() {
        cout << "\n\t\033[1;33m PRIORITY QUEUE USING LINKED LIST\n\033[0m";
        int choice, data, priority ,temp;

        PQueue pqueue;
        do {
                cout << "\n\t**** Operations On priority Queue****\n";
                cout << "\n\t 1. Add data with priority";
                cout << "\n\t 2. Delete data with highest priority";
                cout << "\n\t 3. get highest priority element";
                cout << "\n\t 4. Display Queue";
                cout << "\n\t 5. Exit\n";

                cout <<"\n\tEnter operation: ";
                cin >> choice;

                switch (choice ) {
                        case 1:
                                cout << "\n\tEnter data: ";
                                cin >> data;
                                cout << "\tEnter priority: ";
                                cin >> priority;

                                if( pqueue.enqueue(data,priority) )
                                        cout << "\n\tData Inserted Successfuly\n";
                                break;


                        case 2:
                                cout << "\n\t";
                                temp = pqueue.dequeue();
                                if(temp != 0)
                                        cout << "\n\t*** Data dequeued: " << temp << " ***\n";
                                else
                                        cout << "\n\t*** Data deletion failed!! Queue underflow ***\n";
                                break;

                        case 3:
                                temp = pqueue.getHighestPriority();
                                if(temp == 0)
                                        cout << "\n\tQueue is Empty\n";
                                break;

                        case 4:
                                pqueue.display();
                                break;

                        case 5:
                                cout << "\n\tThank you" << endl;
                                break;
                        default:
                                cout << "\n\tWrong choice try again\n";
                                break;

                }

        }while(choice != 5);
}//..
