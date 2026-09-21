typedef unordered_map<int, int> umii;
typedef unordered_map<int, umii> umiu;

class Solution {
public:
    umiu bfs(Node* root) {
        umiu mp;

        if (!root)
            return mp;

        queue<pair<Node*, int>> q;
        q.push({root, 1});

        while (!q.empty()) {
            auto [node, level] = q.front();
            q.pop();

            mp[level][node->data]++;

            if (node->left)
                q.push({node->left, level + 1});

            if (node->right)
                q.push({node->right, level + 1});
        }

        return mp;
    }

    bool areAnagrams(Node* root1, Node* root2) {
        return bfs(root1) == bfs(root2);
    }
};