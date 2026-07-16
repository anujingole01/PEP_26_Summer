//gfg height of binary tree
#include <algorithm>

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

 int height(Node* root) {
     if (root == nullptr) {
         return 0;
     }
 
     int leftHeight = height(root->left);
     int rightHeight = height(root->right);
 
    return std::max(leftHeight, rightHeight) + 1;
 }