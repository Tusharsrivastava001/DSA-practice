#include<iostream>
#include<vector>
#include<queue>
void bfs(int start,std::vector<std::vector<int>> &adj){
    std::vector<bool> vis(adj.size(),false);
    std::queue<int> q;
    q.push(start);
    vis[start]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        std::cout<<node<<" - ";
        for(auto ele : adj[node]){
            if(!vis[ele]){
                vis[ele]=true;
                q.push(ele);
            }
        }
    }
}
int main(){
    int n,m;
    std::cin>>n>>m;
    std::cout<<"Enter the number of vertex n and edges m edges";
    std::vector<std::vector<int>> adj(n+1);
    
    for(int i=0;i<m;i++){
        int u,v;
        std::cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1,adj);
    //above hamari list
    
}