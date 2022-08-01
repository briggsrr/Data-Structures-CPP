#include "Linkedlist.h"

void Linkedlist::insertNodeBeginning(int data) {
    Node* newNode = new Node(data);
    Node* temp = this->head;
    this->head = newNode;
    newNode->next = temp;

}

void Linkedlist::printList() {
    Node* temp = this->head;
    while(temp != NULL) {
        cout << temp -> data << ", ";
        temp = temp -> next;
    }
    cout << endl;
}

