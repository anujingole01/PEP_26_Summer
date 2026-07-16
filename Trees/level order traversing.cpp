#include <iostream>
#include <queue>
using namespace std;

//level order traversing

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

void levelOrder(Node* root) {
    if (root == nullptr) {
        return;
    }
    
    std::queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        
        cout << current->data << " ";
        
        if (current->left != nullptr) {
            q.push(current->left);
        }
        
        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
}