#include <vector>
#include <queue>

struct Node {
    int data;
    Node *left;
    Node *right;
};

// k distance from root
class Solution {
  public:
    std::vector<int> kdistance(int k, Node *root) {
        std::vector<int> ans;
        if(!root) return ans;
        std::queue<Node*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()) {
            int size = q.size();
            if(level == k) {
                for(int i = 0; i < size; i++) {
                    Node* curr = q.front();
                    q.pop();
                    ans.push_back(curr->data);
                }
                break;
            }
            for(int i = 0; i < size; i++) {
                Node* curr = q.front();
                q.pop();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            level++;
        }
        return ans;
    }
};