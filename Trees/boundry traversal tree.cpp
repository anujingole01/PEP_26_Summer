// Boundry traversal tree gfg 
#include <vector>
using namespace std;

class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; 

class Solution {
  public:
    bool isLeaf(Node* node) {
      return node && !node->left && !node->right;
    }

    void addLeaves(Node* root, vector<int>& ans) {
      if(!root) return;
      if(isLeaf(root)) {
        ans.push_back(root->data);
        return;
      }
      addLeaves(root->left, ans);
      addLeaves(root->right, ans);
    }

    vector<int> boundaryTraversal(Node *root) {
        
      Node* curr = root;
      vector<int> ans;
      if(!curr) return ans;
      ans.push_back(curr->data);
      curr = curr->left;
      while(curr) {
          if(!isLeaf(curr)) ans.push_back(curr->data);
          if(curr->left) curr = curr->left;
          else curr = curr->right;
      }

      addLeaves(root, ans);
      vector<int> right;
      curr = root->right;
      while(curr) {
          if(!isLeaf(curr)) right.push_back(curr->data);
          if(curr->right) curr = curr->right;
          else curr = curr->left;
      }

      for(int i = right.size() - 1; i >= 0; i--) {
          ans.push_back(right[i]);
      }
      return ans;
    }
};