//count leaf of nodes

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

 int countLeafNodes(Node* root) {
     if (root == nullptr) {
         return 0;
     }
     if (root->left == nullptr && root->right == nullptr) {
         return 1;
     }
     return countLeafNodes(root->left) + countLeafNodes(root->right);
 }