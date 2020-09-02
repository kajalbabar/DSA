/*
 * THIS FILE CONTIAN ALL THE REQUIRED METHOD FOR PERFORMING OPERATIONS ON THE HASHTAbLE
 */



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

}//..
