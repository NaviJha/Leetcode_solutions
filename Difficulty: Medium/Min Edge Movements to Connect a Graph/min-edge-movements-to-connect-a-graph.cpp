class Solution {
    vector<int> parent, sz;

    int find(int x) {
        if (parent[x] == x)
            return x;

        return parent[x] = find(parent[x]);
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);

        if (a == b)
            return;

        if (sz[a] < sz[b])
            swap(a, b);

        parent[b] = a;
        sz[a] += sz[b];
    }

  public:
    int minEdgesReq(int n, vector<vector<int>>& edges) {
        int m = edges.size();

        if (m < n - 1)
            return -1;

        parent.resize(n);
        sz.assign(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;

        for (auto &edge : edges) {
            int u = edge[0];
            int v = edge[1];

            unite(u, v);
        }

        int components = 0;

        for (int i = 0; i < n; i++) {
            if (find(i) == i)
                components++;
        }

        return components - 1;
    }
};