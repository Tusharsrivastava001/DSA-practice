#include<iostream>
#include<vector>
int main(){
    int n,m;
    std::cout<<"Enter the n and m man"<<std::endl;
    std::cin>>n>>m;
    //n is the number of rows 
   std::vector<std::vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int u,v;
        std::cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for(int i=1;i<=n;i++){
        std::cout<<i<<"->";
        for(auto ele : adj[i]){
            std::cout<<ele<<" ";
        }
        std::cout<<std::endl;
    }
    
    
}