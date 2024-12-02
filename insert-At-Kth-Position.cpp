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
void insertAtPosition(Node*&head,int value,int pos){
    if(pos==0){
        insertAtHead(head,value);
        return;
    }
    Node* new_node=new Node(value);
    Node*temp=head;
    int current_pos=0;
    while(current_pos!=pos-1){
        temp=temp->next;
        current_pos++;
    }
    new_node->next=temp->next;
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
    // insertAtEnd(head,5);
    // display(head);
    insertAtPosition(head,100,1);
    display(head);
    return 0;
}