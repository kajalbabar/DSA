/* This file contain the driver program for hash table
 * All functnality are  called using  this program
 */

//include all neccessary header files
#include <iostream>
using namespace std;


//declared as global for visibility purpose
int n;

#include "hashtable.h"

int main() {
	cout << "\033[0;31m";
        cout << "\n\t\t\t\t Hash table by using Seperate Chaining method\n";
    	cout<<"\033[m";
	int choice, temp , data;

	//test case 0: n should be greater than 0
	do {
			cout << "Enter the capacity of the hash table: ";
			cin >> n;
			if(n <= 0)
				cout << "\n\t**** capacity of hash table should be greater than 0. Try again ****\n";

	}while(n<=0);

	//create a array of size n which will hold the address of the values
	hTable = (Node**)calloc (sizeof(Node*), n);


	do {
		cout << "\t******** Operations on Hash table *********\n";
		cout << "\t1. Insert \n\t2. Search\n\t3. Delete\n\t4. Display\n\t5. Exit\n";
		cout << "\n\tEnter the operation number: ";
		cin >> choice;

		switch(choice) {
				//case for inserting the value
				case 1:
					cout << "\n\tEnter the data to insert: ";
					cin >> data;
					if(insert(data))
						cout << "\n\t **** DATA INSERTED SUCCESSFULLY ****\n\n";
					else
						cout << "\n\t **** DATA is not INSERTED SUCCESSFULLY ****\n\n";
					break;

				//case for searching the value
				case 2:
					cout << "\n\tEnter the data to search: ";
					cin >> data;

					if(search(data))
						cout << "\n\t **** DATA PRESENT IN THE LIST ****\n\n";
					else
						cout << "\n\t **** DATA is not present in table ****\n\n";
					break;

				//case for deleleting the record
				case 3:
					cout << "\n\tEnter the data to delete: ";
					cin >> data;
					if(deleteNode(data))
						cout << "\n\t **** DATA DELETED SUCCESSFULLY ****\n\n";
					else
						cout << "\n\t **** DATA is not present in the list ****\n\n";
					break;

				//case for printing
				case 4:
					display();
					break;

				case 5:
					cout << "\n\t\033[1;31m THANK YOU \033[0m \n";
					break;
				Default:
					cout << "\n\tWrong choice!! Try again\n";
					break;

		}

	}while(choice != 5);


}
