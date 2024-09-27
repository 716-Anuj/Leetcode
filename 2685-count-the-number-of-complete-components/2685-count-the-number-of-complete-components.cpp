class Solution {
public:

    void dfs(int index, vector<bool> &vis, vector<vector<int>>&adj, vector<int>&component) {
        vis[index] = true;
        component.push_back(index);

        for(auto child : adj[index]) {
            if(vis[child]) continue;
            dfs(child, vis, adj, component);
        }
    }

    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n, false);
        vector<vector<int>> adj(n);
        int count = 0;

        for(auto i : edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        for(int i = 0; i < n; i++) {
            if(vis[i]) continue;
            vector<int> component;
            dfs(i, vis, adj, component);

            int node = component.size();
            int edgeCount = 0;

            for(auto i : component) {
                edgeCount += adj[i].size();
            }

            if(edgeCount == node * (node-1)) count++;
        }
        return count;
    }
};