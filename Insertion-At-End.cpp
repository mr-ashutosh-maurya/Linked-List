#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

void insertAtHead(Node* &head,int value ){
    Node* new_node=new Node(value);
    new_node->next=head;
    head=new_node;
}
void insertAtEnd(Node*&head,int value){
    Node*new_node=new Node(value);
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
    }
    //temp has reached at last node
    temp->next=new_node;
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
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,30);
    // display(head);
    insertAtEnd(head,5);
    display(head);

    return 0;
}