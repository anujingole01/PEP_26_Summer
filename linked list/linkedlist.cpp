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
int main(){
    Node * head = new Node(1);
    Node * second = new Node(2);
    Node * third = new Node(3);

    head->next = second;
    second->next = third;

    cout<<head->data<<endl;
    cout<<second->data<<endl;
    cout<<third->data<<endl;

    return 0;
}