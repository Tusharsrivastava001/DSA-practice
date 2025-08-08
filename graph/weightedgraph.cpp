#include<iostream>
#include<vector>
#include<list>
int v;
std::vector<std::list<std::pair<int,int>>> graph;
void add_edge(int src,int dest,int weight,bool bi_dir=true){
    graph[src].push_back({dest,weight});
    if(bi_dir){
        graph[dest].push_back({src,weight});
    }
}
void display(){
    for(int i=0;i<graph.size();i++){
        std::cout<<i<<" ---- >";
        for(auto ele : graph[i]){
            std::cout<<ele.first<<","<<ele.second<<"} ";
        }
        std::cout<<std::endl;
    }
}
int main(){
    std::cin>>v;
    graph.resize(v);
    int e;
    std::cin>>e;
    while(e--){
        int s,d,w;
        std::cin>>s>>d>>w;
        add_edge(s,d,w,true);
    }
    display();
    
}
