
#include <iostream>
using namespace std;

class HashTable {

	private:
	        //declare a pointer
	        int *hTable = NULL;

	        //declare a variable to store the n
	        int capacity;

	        //declare a variable to track how many elements are inserted
	        int entered;


	public:

		//non-parameterized constructor
		HashTable() {
			hTable = (int*) calloc(sizeof(int),10);
			capacity = 10;
			entered = 0;
		}
		//parameterized constructor
		HashTable(int capacity) {
			hTable = (int*) calloc(sizeof(int),capacity);
			this->capacity = capacity;
			entered = 0;
		}

                //declaration of methods
		bool insert(int);
		bool deleteNode(int);
		int search(int);
		void display();
		int hashFunction(int);

};



//driver program
int main() {
        int choice, temp,capacity;
        cout << "\n\tEnter size of a hash table:  ";
        cin >> capacity;

	//create an object
	HashTable hash(capacity);

        do {
                cout << "\n\t**** Operations on hash table ****\n";
                cout << "\n\t1. Insert \n\t2. Search \n\t3. Delete \n\t4. Display \n\t5. Exit\n";

                cout << "\n\tEnter operation to perfom: ";
                cin >> choice;
                switch (choice) {
                        case 1:
                                cout << "\n\tEnter the data to insert: ";
                                cin >> temp;
                                if(hash.insert(temp))
                                        cout << "\n\t*** Inserted successfully ***\n";
                                else
                                       cout << "\n\t*** Insertion failed***\n";

                                break;

                        case 2:
                               cout << "\n\tEnter the data to search: ";
                               cin >> temp;

                               if(hash.search(temp) != -1)
                                       cout << "\n\t*** Data is present at index "<< hash.search(temp)<<"  ***\n";
                               else
                                       cout << "\n\t*** Data is not present in the table ***\n";
                               break;


                       case 3:
                               cout << "\n\tEnter the data to delete: ";
                               cin >> temp;
                              if(hash.deleteNode(temp))
                                     cout << "\n\t*** Data deleted successfully ***\n" ;
                              else
                                     cout << "\n\t*** Data is not present in the table ***\n";

                              break;

                      case 4:
                              hash.display();
                              break;
                      case 5:
                             cout << "\n\t\033[1;31m THANK YOU \n\033[0m";
                              break;

                      default:
                              cout << "\n\tWrong choice!!true again\n";
                              break;

                   }

           }while(choice != 5);
}

/*
 * hashFunction(int)
 * 	return type: int
 * 	parameter type: int
 * 	return an hash value for the given key
 */

int HashTable :: hashFunction(int key) {
	return key % capacity;
}//..

/*
 * insert(int)
 * 	return type: bool
 * 	parameter type: int
 * 	used to insert an element into an hashtable
 */
bool HashTable :: insert(int key){

	//if already enetered element are equal to capacity then there is no space to store
	if(entered == capacity)
		return false;

	//find the index for the key
	int index = hashFunction(key);

        int count = 0;

        //search until we did not find the empty position
        //here I considerd the 0 for empty position
        while(hTable[index] != 0) {
                index = hashFunction(key + (count+1));
                count++;
                if(count == capacity)
                        break;

        }
        if(count < capacity) {
                hTable[index] = key;
                entered++;
                return true;
        }
}//..


/*
 * search(int):
 * 	return type: bool
 * 	parameter type: int
 * 	used to search element from hashtable
 */

int HashTable :: search(int key) {

		//get index of given key
		int index = hashFunction(key);

		for(int i = 1; i <= capacity; i++) {
			if( hTable[index] == key && hTable[index] != 0 )
				return index;
			index = hashFunction(key+i);
		}
		return -1;
}//..

/*
 * deleteNode(int):
 * 	return type: bool
 * 	parameter type: int
 * 	used to delete the node from the hashTable
 * 	deletion of node means just put their zero
 */
bool HashTable :: deleteNode(int key) {

		//get the index of the node using search function
		int index = search(key);
               
		//if that result is not equal to -1 then procced further
		if(index != -1) {
			hTable[index] = 0;				//deleted
                        entered--;
			return true;
		}
		return false;
}//..


/*
 * display()
 * 	return type: void
 * 	parameter type: void
 * 	used to display the hashdata
 */

void HashTable :: display() {
	bool flag = 1;

	cout << "\033[1;31m";

	cout << "\n\t*** Data in Table ***\n";

	//traverse all array
	for(int i=0; i<capacity ;i++) {

		//index madhe entry asel trch print karych
		if(hTable[i]!= 0) {
			flag = 0;
			cout << "\t" << hTable[i];
		}

	}

	if(flag)
		cout << "\n\t**** Table is empty **** \n";
	cout << "\033[0m\n";

}
