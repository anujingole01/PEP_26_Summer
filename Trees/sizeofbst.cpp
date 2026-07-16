#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }

};


void preorder(Node* root) {
    if (root == nullptr) {
        return;
    }
    
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int countNodes(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    
    return 1 + countNodes(root->left) + countNodes(root->right);
}

