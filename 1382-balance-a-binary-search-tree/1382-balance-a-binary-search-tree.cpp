class Solution {
public:
    void inorder(TreeNode* root, vector<int>& current) {
        if (root == NULL) return;
        inorder(root->left, current);
        current.push_back(root->val);
        inorder(root->right, current);
    }

    TreeNode* build(vector<int>& ans, int l, int r) {
        if (l > r) return NULL;

        int mid = (l + r) / 2;
        TreeNode* root = new TreeNode(ans[mid]);

        root->left = build(ans, l, mid - 1);
        root->right = build(ans, mid + 1, r);

        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);          // fixed pass by reference
        return build(ans, 0, ans.size() - 1);
    }
};
