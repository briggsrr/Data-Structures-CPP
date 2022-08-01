#include <iostream>
#include <memory>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist
{
private:
    Node *head;

public:
    Linkedlist() { head = NULL; }
    void insertNodeBeginning(int);
    void printList();
    void deleteNode(int);
};