//insert in a sorted linked list

#include<iostream>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        Node* newNode = new Node(data);
        if (head == nullptr || data < head->data) {
            newNode->next = head;
            return newNode;
        }
                Node* current = head;
        while (current->next != nullptr && current->next->data < data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
        
        return head;
    }
};
