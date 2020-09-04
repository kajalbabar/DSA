/*
 * 	This file contain declaration of structure which is used to create a node
 */

//create a structure for node
typedef struct Node{
        //variable to store the data
        int data;
        //pointer for the next node
        struct Node* next;
}Node;


//method for creating a node
Node* createNode(int data) {
        //create a node using new
        Node* newNode = new Node();
        //copy the data into node
        newNode->data= data;
        newNode->next =NULL;         //means our node is not pointing anywhere
        return newNode;              //return the address of newly created node
}
