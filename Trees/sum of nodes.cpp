//sum of nodes in a tree

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

 int sumOfNodes(Node* root) {
     if (root == nullptr) {
         return 0;
     }
     return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
 }