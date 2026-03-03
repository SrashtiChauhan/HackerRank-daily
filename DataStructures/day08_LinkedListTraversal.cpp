#include <iostream>
using namespace std;

//define node class
class Node {
public:
    int data;
    Node*next;

    Node(int value) {
        data=value;
        next=NULL;

    }
};

//print list
void printList(Node* head) {
    Node* temp=head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    Node*head=NULL;
    Node*tail=NULL;
    int n, data;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>data;
        Node* newNode=new Node(data);
        if(head==NULL) {
            head=newNode;
            tail=newNode;
        }
        else {
            tail->next=newNode;
            tail=newNode;
        }
    }
    printList(head);
    return 0;
}