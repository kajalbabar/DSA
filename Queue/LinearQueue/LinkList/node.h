//create a structure for the node
typedef struct Node {
        int data;         //for data
        Node* next;       //for storing address of next node
}Node;      //alternative name for 'struct Node'

//method for creating a node
Node* createNode(int data) {
        //create a node using new
        Node* newNode = new Node();
        //copy the data into node
        newNode->data= data;
        newNode->next =NULL;         //means our node is not pointing anywhere
        return newNode;              //return the address of newly created node
}
