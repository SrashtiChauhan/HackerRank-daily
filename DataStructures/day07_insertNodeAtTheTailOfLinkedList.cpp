#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int value) {
        data=value;
        next=NULL;

    }

};
Node* insertNodeAtTail(Node* head, int data) {
    Node* newNode= new Node(data);
    if(head==NULL) {
        return newNode;
    }
    else {
        Node*temp =head;
        while(temp->next!=NULL) {
            temp=temp->next;
        }
        temp->next=newNode;
        return head;
    }
}
// Print list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head=NULL;
    int n, data;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> data;
        head=insertNodeAtTail(head, data);
    }
    printList(head);
    return 0;
}