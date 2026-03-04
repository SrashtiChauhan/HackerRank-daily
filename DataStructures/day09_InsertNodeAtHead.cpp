#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

Node *insertNodeAtHead(Node*head, int data) {
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    return head;
}

void printList(Node* head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
int main() {
    Node*head =NULL;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int value;
        cin>>value;
        head=insertNodeAtHead(head,value);
    }
    printList(head);
    return 0;
}