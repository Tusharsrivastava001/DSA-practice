class Solution {
  public:
  
    void dfs(int node,std::vector<std::vector<int>> &adj,std::vector<bool> &vis,std::vector<int> &comp){
        vis[node]=true;
        comp.push_back(node);
        for(int ele : adj[node]){
            if(!vis[ele]){
                dfs(ele,adj,vis,comp);
            }
        }
        
    }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        std::vector<std::vector<int>> adj(V);
        for(auto ele : edges){
            int u=ele[0];
            int v=ele[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
       //here we make the connection vertix n edges
        
        std::vector<std::vector<int>> ans;
        int count=0;
        std::vector<bool> vis(V,false); //initiliase all the with false to get mark
        
        for(int i=0;i<V;i++){
            std::vector<int> comp;
            if(!vis[i]){
                dfs(i,adj,vis,comp);
                ans.push_back(comp);
            }
            
        }
        return ans;
        
    }
};
