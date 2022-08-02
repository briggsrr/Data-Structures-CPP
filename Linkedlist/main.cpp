#include "Linkedlist.h"
#include <iostream>
using namespace std;

int main() 
{
    Linkedlist test;
    test.inserNodeAtNth(2,1);
    test.inserNodeAtNth(3,2);
    test.inserNodeAtNth(4,1);
    test.inserNodeAtNth(5,2);
    test.printList();
}