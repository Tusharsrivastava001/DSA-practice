#include<iostream>
#include<list>
#include<vector>
std::vector<std::list<int>> graph;
int v; //no of vertiex
void add_edge(int scr,int dest,bool bi_dir=true){
    graph[scr].push_back(dest); //agr koe direction nhi hai then src se desination me edge lagego 
    if(bi_dir){
        graph[dest].push_back(scr);
    }
}

void display(){
    for(int i=0;i<graph.size();i++){
        std::cout<<i<<" --> ";
        for(auto el : graph[i]){
            std::cout<<el<<" ";
        }
        std::cout<<"\n";
    }
}
int main(){
    std::cin>>v;
    graph.resize(v);
    int e; 
    std::cin>>e;
    while(e--){
        int s,d;
        std::cin>>s>>d;
        add_edge(s,d);
    }
    display();
    return 0;
    
}
