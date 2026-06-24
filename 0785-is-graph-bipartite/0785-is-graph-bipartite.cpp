class Solution {
public:

bool dfs(int node,int col ,vector<int>&color ,vector<vector<int>>& graph  ){
    color[node]=col; // a color to node let 0
    for(auto it:graph[node]){ // traverse on adjacent nodes
    if(color[it]==-1){
        if(!dfs(it,1-col,color,graph)) return false; // dfs(node , 1-0,color,graph) any conflict false
    }
        else if(color[it]==col) return false; //if col i.e 0  and color is also 0 conflict 
    }
    return true; //otherwise true
}

    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>color(n,-1);
        for(int i=0;i<n;i++){
            if(color[i]==-1){
            if(!dfs(i,0,color,graph)) return false;
            }
        }
        return true;
    }
};