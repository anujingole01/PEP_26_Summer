//gfg top view
#include<bits/stdc++.h>
#include <map>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        
        vector<int> result;
        
        if(!root) return result;
        
        map<int, int> topNode;
        queue<pair<Node*, int>> q;
        
        q.push(make_pair(root, 0));
        while(!q.empty()){
            pair<Node*, int> frontVal = q.front();
            q.pop();
            
            Node* node = frontVal.first;
            int hd = frontVal.second;
            
            if(topNode.find(hd) == topNode.end()){
                topNode[hd] = node->data;
            }
            if(node->left)q.push(make_pair(node->left, hd-1));
            if(node->right)q.push(make_pair(node->right, hd+1));
            
            
        }
        for(auto i : topNode){
            result.push_back(i.second);
        }
        return result;
    }
};