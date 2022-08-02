#include "Linkedlist.h"

void Linkedlist::insertNodeBeginning(int data) {
    Node* temp = new Node(data);
    temp->next = this->head;
    this->head = temp;

}

void Linkedlist::printList() {
    Node* temp = this->head;
    while(temp != NULL) {
        cout << temp -> data << ", ";
        temp = temp -> next;
    }
    cout << endl;
}


void Linkedlist::inserNodeAtNth(int data, int pos) {
    Node* newNode = new Node(data);
    Node* temp = this->head;

    if(pos == 1) {
        this->insertNodeBeginning(data);
    }
    
    for(int i = 0; i < pos; i++) {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

}
