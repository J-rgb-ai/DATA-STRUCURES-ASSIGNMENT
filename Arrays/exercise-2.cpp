#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void insert(Node*& head, int newData) {
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;
    head = newNode;
}

void display(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    
    // Insert elements
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    
    // Display the linked list
    display(head);

    return 0;
}
