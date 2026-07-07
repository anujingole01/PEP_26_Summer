//delete  the node at end

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void deleteAtEnd(Node* &head){
    Node* temp=head;
    Node* prev=NULL;

    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    delete temp;
}

int main(){
    Node* node1=new Node(10);
    Node* node2=new Node(20);
    Node* node3=new Node(30);
    Node* node4=new Node(40);

    node1->next=node2;
    node2->next=node3;
    node3->next=node4;

    deleteAtEnd(node1);

    Node* temp=node1;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
};



