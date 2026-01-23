#include<iostream>

#include<vector>
#include<algorithm>
int main(){
    int n,m;
    //n is the node and m is the edges
    std::cout<<"Enter the n vertix n the edges m : "<<std::endl;
    std::cin>>n>>m;
    std::vector<std::vector<int>> adj(n+1,std::vector<int>(n+1,0)); //aur abb yaha par hamse edge input lene hai
    for(int i=0;i<m;i++){
        int u,v;
        std::cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            std::cout<<adj[i][j]<<" ";
        }
        std::cout<<std::endl;
        
    }
}