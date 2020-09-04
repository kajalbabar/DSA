/* This file contain declaration of Structure for the node which is used to create a new node
 * Emthod is defined by using that node will be created
 */

typedef struct node {
	int data;
	node* next;

}Node;

/* createNode(int data):
 * 	return type: Node*
 * 	parameter type: int
 * 	Used to create a new node
 */

Node* createNode(int data) {
	Node* newNode = new Node;		//allocate memory
	newNode->data = data;			//copy the data
	newNode->next = NULL;			//assign the null value
	return newNode;				//return the address of the newly created node
}

//hTable is an array which stores the address of structure
Node** hTable = NULL;
