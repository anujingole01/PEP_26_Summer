#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int val){
        data = val;
        next = NULL;

    }
};
void insertAtEnd(Node* &head, int val){
    Node* n0de = new Node(val);
    if(head == NULL){
        head = n0de;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n0de;

}
int main(){
    Node* head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
}