#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        // next=NULL;
    }
};

void insertAtHead(Node* &head,int value ){
    Node* new_node=new Node(value);
    new_node->next=head;
    head=new_node;
}
void display(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node*head=NULL;
    display(head);
    insertAtHead(head,10);
    display(head);
    insertAtHead(head,20);
    display(head);
    insertAtHead(head,30);
    display(head);

    return 0;
}