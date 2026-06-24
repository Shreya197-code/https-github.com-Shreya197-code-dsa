class Solution {
public:

    bool dfs(int node,
             vector<vector<int>>& adj,
             vector<int>& vis,
             vector<int>& pathVis,
             vector<int>& topo) {

        vis[node] = 1;
        pathVis[node] = 1;

        for (auto it : adj[node]) {

            if (!vis[it]) {

                if (dfs(it, adj, vis, pathVis, topo))
                    return true;   // cycle found
            }

            else if (pathVis[it]) {
                return true;       // back edge => cycle
            }
        }

        pathVis[node] = 0;

        topo.push_back(node);

        return false;
    }

    vector<int> findOrder(int numCourses,
                          vector<vector<int>>& prerequisites) {

        vector<vector<int>> adj(numCourses);

        for (auto &it : prerequisites) {

            int course = it[0];
            int prereq = it[1];

            adj[prereq].push_back(course);
        }

        vector<int> vis(numCourses, 0);
        vector<int> pathVis(numCourses, 0);
        vector<int> topo;

        for (int i = 0; i < numCourses; i++) {

            if (!vis[i]) {

                if (dfs(i, adj, vis, pathVis, topo))
                    return {};
            }
        }

        reverse(topo.begin(), topo.end());

        return topo;
    }
};