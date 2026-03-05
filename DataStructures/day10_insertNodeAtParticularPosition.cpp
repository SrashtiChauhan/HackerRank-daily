#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* insertAtPosition(Node* head, int data, int position) {

    Node* newNode = new Node(data);

    if(position == 0) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* temp = head;

    for(int i = 0; i < position-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp == NULL) {
        cout << "Position out of bounds" << endl;
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void printList(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    int n;
    cin >> n;

    Node* head = NULL;

    for(int i = 0; i < n; i++) {
        int data, position;
        cin >> data >> position;

        head = insertAtPosition(head, data, position);
    }

    printList(head);

    return 0;
}