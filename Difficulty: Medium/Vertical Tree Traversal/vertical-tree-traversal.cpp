/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        map<int , vector<int>> mp;
        queue<pair<Node*, int>> q;
        vector<vector<int>>ans;
        if(root == NULL ) return ans;
        q.push({root, 0});
        while(!q.empty()){
            pair<Node*, int> node = q.front();
            q.pop();
            Node* ele = node.first;
            int ind = node.second;
            mp[ind].push_back(ele->data);
            if(ele->left != NULL) q.push({ele->left, ind-1});
            if(ele->right != NULL) q.push({ele->right, ind+1});
            
        }
        for(auto it: mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};