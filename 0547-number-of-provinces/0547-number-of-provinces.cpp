class Solution {
public:

    void dfs(vector<int> adjls[], int i, vector<int> &vis) {
        vis[i] = 1;
        for(auto it : adjls[i]) {
            if(!vis[it]) {
                dfs(adjls, it, vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        vector<int> adjls[V];

        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                if(isConnected[i][j] == 1 && i != j) {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i);
                }
            }
        }

        vector<int>vis(V, 0);
        int cnt = 0;

        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                cnt++;
                dfs(adjls, i, vis);
            }
        }
        return cnt;
    }
};