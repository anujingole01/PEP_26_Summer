//lc odd even linked list

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class solution{
    public:
    Node* oddEvenList(Node* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        Node* odd = head;
        Node* even = head->next;
        Node* evenHead = even;

        while(even != NULL && even->next != NULL){
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        odd->next = evenHead;
        return head;
    }
};