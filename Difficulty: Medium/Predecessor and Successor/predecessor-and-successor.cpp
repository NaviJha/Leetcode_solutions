class Solution {
public:
    void inor(Node* root, vector<Node*>& v) {
        if (root == NULL) return;
        inor(root->left, v);
        v.push_back(root);
        inor(root->right, v);
    }

    vector<Node*> findPreSuc(Node* root, int key) {
        vector<Node*> v;
        inor(root, v);
        Node* pre = NULL;
        Node* suc = NULL;

        for (int i = 0; i < v.size(); i++) {
            if (v[i]->data < key) {
                pre = v[i]; // Keep updating pre until we hit key or something larger
            } else if (v[i]->data > key) {
                suc = v[i]; // The first element larger than key is the successor
                break;
            }
        }
        return {pre, suc};
    }
};
