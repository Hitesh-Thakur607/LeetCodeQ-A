class Solution {
public:
    void makevisit(vector<bool>& visited, int curr, vector<vector<int>>& adj) {
        visited[curr] = true;
        for (auto& it : adj[curr]) {
            if (!visited[it]) {
                makevisit(visited, it, adj);
            }
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& inv) {
        vector<vector<int>> adj(n);
        for (int i = 0; i < inv.size(); i++) {
            adj[inv[i][0]].push_back(inv[i][1]);
        }
        vector<bool> visited(n, false);
        vector<int> ans;
        makevisit(visited, k, adj);
        bool alltrue = false;
        for (int i = 0; i < adj.size(); i++) {
            if (!visited[i]) {
                for (int j = 0; j < adj[i].size(); j++) {
                    if (visited[adj[i][j]]) {
                        alltrue = true;
                        break;
                    }
                }
            }
            if (alltrue) {
                break;
            }
        }
        if (alltrue) {
            for (int i = 0; i < n; i++) {
                ans.push_back(i);
            }
            return ans;
        }
        for (int i = 0; i < adj.size(); i++) {
            if (!visited[i]) {
                ans.push_back(i);
                visited[i] = true;
                for (int j = 0; j < adj[i].size(); j++) {
                    if (!visited[adj[i][j]]) {
                        ans.push_back(adj[i][j]);
                        visited[adj[i][j]] = true;
                    }
                }
            }
        }
        return ans;
    }
};