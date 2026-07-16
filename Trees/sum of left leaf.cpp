//lc 404 sum of left leaf


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

 int sumOfLeftLeaves(Node* root) {
     if (root == nullptr) {
         return 0;
     }
     int sum = 0;
     if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
         sum += root->left->data;
     }
     sum += sumOfLeftLeaves(root->left);
     sum += sumOfLeftLeaves(root->right);
     return sum;
 }