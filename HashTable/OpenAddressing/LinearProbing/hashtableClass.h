/*
 * Class declaration 
 */

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
