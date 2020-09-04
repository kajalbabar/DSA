/*
 * This File contain methods for hash functions
 */

#include "node.h"


/* hashFunction(int):
 *	return type: int
 *	parameter type: int
 *	used to find the index of the value
 */
int hashFunction(int value) {
	return value%n;			//return the index
}



/* insert(int):
 * return type: bool
 * paramater type: int
 * used to insert the data into hash table
 */

bool insert(int value) {

	//get the index of the value
	int index = hashFunction(value);

	//create a node
	Node* newNode = createNode(value);

	//if position is empty then insert directly
	if(hTable[index] == NULL) {
		hTable[index] = newNode;
		return true;
	}

	//else travel upto the end of the list
	else {
		//copy that address
		Node* temp = hTable[index];

		//traverse upto the end of the list
		while(temp->next != NULL)
			temp = temp->next;
		//insert the node
		temp->next = newNode;
		return true;
	}
	return false;
}//..

/* display()
 * return type: void
 * parameter type: none
 * used to display the data
 */

void display() {

	Node* temp;
	bool flag = 1;
	cout << "\033[1;31m";
	cout << "\n\t*** Data in Table ***\n";
	//traverse all array
	for(int i=0; i<n ;i++) {

		//index madhe entry asel trch print karych
		if(hTable[i]!=NULL) {
			flag = 0;
			cout << "\t" <<i << " --->  ";
			temp = hTable[i];
			while(temp != NULL) {
					cout << temp->data << "\t";
					temp = temp->next;
			}
			cout << endl;
		}

	}

	if(flag)
		cout << "\n\t**** Table is empty **** \n";
	cout << "\033[0m";

}



/* Search(int)
 * 	return type: bool
 * 	parameter type: int
 * 	returns true if the value is present in the table or not
 */

bool search(int key) {

		//first calculate the index of key
		int index = hashFunction(key);

		//if the index position is empty then there is no any value attached to it
		if(hTable[index] == NULL)
			return false;

		//else there are keys linked
		else {
			Node* temp = hTable[index];

			//traverse upto the end of list
			while(temp != NULL) {

				//check whether the key matches with the current node
				if(temp->data == key)
					return true;

				//not matched then move to next node
				temp = temp->next;
			}
		}
		return false;

}//..


/* deleteNode(int):
 * 	return type: bool
 * 	parameters: int
 * 	used to delete the key from the hashing table
 */

bool deleteNode(int key) {
	if(search(key)) {
		int index = hashFunction(key);
		Node* current = hTable[index], *previous;

		//if that node is first node then changes will be made at array hTable
		if(current->data == key ) {
			hTable[index] = current->next;
			delete current;
			return true;
		}

		//travel upto the node which contain the key
		//previous will point the predeccor node of current node
		while(current->data != key) {
			previous = current;
			current = current->next;
		}

		//point the previous to the next of current node
		previous->next = current->next;
		delete current;
		return true;

	}
	return false;
}//..
