void dfs(int node,std::vector<std::vector<int>> &adj,std::vector<bool> &vis){
    vis[node]=true;
    std::cout<<node<<"- > ";
    for(auto ele : adj[node]){
        if(!vis[ele]){
            dfs(ele,adj,vis);
        }
    }
