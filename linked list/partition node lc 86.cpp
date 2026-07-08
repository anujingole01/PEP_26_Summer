//86 leetcode partition List

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Solution {
public:
    Node* partition(Node* head, int x) {
        Node* left = new Node(0);
        Node* right = new Node(0);
        Node* lp = left;
        Node* rp = right;
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data < x) {
                lp->next = temp;
                lp = lp->next;
            } else {
                rp->next = temp;
                rp = rp->next;
            }
            temp = temp->next;
        }
        rp->next = NULL;
        lp->next = right->next;
        return left->next;
    }
};