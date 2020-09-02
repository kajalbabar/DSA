/*
 * THIS FILE CONTAIN DRIVER PRORGAM TO CALL THE HASHING METHOD
 */

#include <iostream>
using namespace std;

#include "hashtable.h"
#include "methods.h"

//driver program
int main() {
        int choice, temp,capacity;

        //Test case 0: capacity should be greater than  0
        do {
                cout << "\n\tEnter size of a hash table:  ";
                cin >> capacity;

                if(capacity <= 0)
                        cout << "\n\tCapacity should be greater than 0 \n";
        }while(capacity <= 0);


	//create an object
	HashTable hash(capacity);


        do {
                cout << "\n\t**** Operations on hash table ****\n";
                cout << "\n\t1. Insert \n\t2. Search \n\t3. Delete \n\t4. Display \n\t5. Exit\n";

                cout << "\n\tEnter operation to perfom: ";
                cin >> choice;

                switch (choice) {

                        //insertion case
                        case 1:
                                cout << "\n\tEnter the data to insert: ";
                                cin >> temp;
                                if(hash.insert(temp))
                                        cout << "\n\t*** Inserted successfully ***\n";
                                else
                                       cout << "\n\t*** Insertion failed***\n";

                                break;

                        //search case
                        case 2:
                               cout << "\n\tEnter the data to search: ";
                               cin >> temp;

                               if(hash.search(temp) != -1)
                                       cout << "\n\t*** Data is present at index "<< hash.search(temp)<<"  ***\n";
                               else
                                       cout << "\n\t*** Data is not present in the table ***\n";
                               break;

                       //deleteNode case
                       case 3:
                               cout << "\n\tEnter the data to delete: ";
                               cin >> temp;
                              if(hash.deleteNode(temp))
                                     cout << "\n\t*** Data deleted successfully ***\n" ;
                              else
                                     cout << "\n\t*** Data is not present in the table ***\n";

                              break;

                      //display data
                      case 4:
                              hash.display();
                              break;

                      //exit
                      case 5:
                             cout << "\n\t\033[1;31m THANK YOU \n\033[0m";
                              break;

                      //default case
                      default:
                              cout << "\n\tWrong choice!!true again\n";
                              break;

                   }

           }while(choice != 5);
}
