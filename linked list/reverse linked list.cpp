//gfg reverse the linked list

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) : data(x), next(NULL) {}
};

class Solution {
  public:
    Node* reverseList(Node* head) {
        // code here
        Node* currNode = head;
        Node* prevNode = NULL;
        Node* nextNode = NULL;
        
        while(currNode  != NULL){
            nextNode  = currNode->next;
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        return prevNode;
    }
};
