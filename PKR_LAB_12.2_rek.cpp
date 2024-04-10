#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* n) {
    if (n == NULL) {
        cout << endl;
        return;
    }
    cout << n->data << " ";
    printList(n->next);
}

void increaseValue(Node* n, int value) {
    if (n == NULL) {
        return;
    }
    n->data += value;
    increaseValue(n->next, value);
}

int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout << "Original list: ";
    printList(head);

    int increaseValueBy;
    cout << "Enter a value to increase each element by: ";
    cin >> increaseValueBy;

    increaseValue(head, increaseValueBy);

    cout << "Updated list: ";
    printList(head);

    return 0;
}
