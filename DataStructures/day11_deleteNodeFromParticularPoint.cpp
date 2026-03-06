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

Node* deleteAtPosition(Node* head, int position) {
    if (head == NULL)
        return NULL;
     Node* current=head;
     Node*temp;
     if(position==0) {
        temp=head;
        head=head->next;
        delete temp;
        return head;
    
    }
    for(int i=0;i<position-1 && current->next!=NULL;i++) {
        current=current->next;
    }
    temp=current->next;
    current->next=temp->next;
    delete temp;
    return head;
}
void printList(Node* head) {
    Node* temp=head;
    while(temp!=NULL) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
        cout << "Enter number of nodes: ";
    int n, value, position;
    cin >> n;
    Node* head = NULL;
    Node* tail = NULL;
    for (int i = 0; i < n; i++) {   
        cin>>value;
    
        Node* newNode = new Node(value);
        if (head == NULL) {
          head = newNode;
          tail = newNode;
        } else {
          tail->next = newNode;
         tail = newNode;
        }
    }
    cout << "Enter position to delete: ";
    cin>>position;
    head=deleteAtPosition(head, position);
    cout << "Updated List: ";
    printList(head);

    return 0;
    
}


