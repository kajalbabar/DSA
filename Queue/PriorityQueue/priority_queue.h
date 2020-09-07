/*
 * 	This file contain defination of all methods of class Priority Queue
 */

#include "queueClass.h"


/*
 * enqueue(int , int):
 */

bool PQueue :: enqueue(int data, int priority) {

                //for inserting the value we have to create first object of that list
                PQueue *newObject = new PQueue(data, priority);

                //if the head is null then insert it
                if(Head == NULL) {
                        Head = newObject;
                }

                else {
                        //travel upto the end of the list then insert
                        PQueue* temp = Head;
                        while(temp->next != NULL)
                                temp = temp->next;
                        temp->next = newObject;
                }
                return true;
}





int PQueue :: getHighestPriority() {
                //here 0 1 and 2 this are priority among them 2 is highest priority and 0 is less and 1 is average
                //this function will return address of hightesh priority and in case there are same priority objects, then it will print all

                if(Head == NULL)
                        return 0;


                int flag = 0, maxPriority = -1;

                PQueue* temp = Head, *maxPriorityNode = Head;

                while(temp!= NULL) {
                        if( temp->priority > maxPriority ) {
                                maxPriority = temp->priority;
                                maxPriorityNode = temp;
                                flag = 1;
                        }
                        temp = temp->next;
                }

                if(flag) {
                        cout << "\n\tHighest Priority data: " << maxPriorityNode-> data << " and Priority: " << maxPriorityNode->priority << endl;
                        return 1;
                }
                else
                        return 0;
}//..



int PQueue ::  dequeue() {
                int tempVal;
                int flag = 0, maxPriority = -1;

                //find first highest Priority
                if(Head == NULL)
                        return 0;

                PQueue* temp = Head, *maxPriorityNode;

                while(temp != NULL) {
                        if( temp->priority > maxPriority ) {
                                maxPriorityNode = temp;
                                maxPriority = temp -> priority;
                        }
                        temp = temp->next;
                }



                if(Head == maxPriorityNode) {
                        Head = maxPriorityNode->next;
                        tempVal = maxPriorityNode -> data;
                        delete maxPriorityNode;
                }

                else {
                        PQueue* current = Head;
                        while(current->next != maxPriorityNode ) {
                                current = current->next;
                        }

                        tempVal = maxPriorityNode -> data;
                        current->next = maxPriorityNode->next;
                        delete maxPriorityNode;
                }

                return tempVal;
}//..

void PQueue :: display() {
                cout << "\033[1;32m";

                if(Head == NULL) {
                        cout << "\n\t*** Queue is Empty ***\n\033[0m";
                        return ;
                }

                PQueue* temp = Head;

                cout << "\n\t*** Data in queue ***\n";
                cout << "\tData\t\tPriority\n";
                while(temp!=NULL) {
                                cout << "\t"<< temp-> data << "\t\t" << temp->priority << endl;
                                temp = temp->next;
                }

                cout << "\033[0m";
}//..
