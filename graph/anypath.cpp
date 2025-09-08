#include<iostream>
#include<vector>
#include<list>
#include<unordered_set>
std::unordered_set<int> visited;
int v;
std::vector<std::list<int>> graph;
void add_edge(int src,int desi,bool bi_dir=true){
    graph[src].push_back(desi);
    if(bi_dir){
        graph[desi].push_back(src);
    }
}
bool dfs(int curr,int end){
    if(curr==end) return true;
    visited.insert(curr); //current node ko visted kar liya
    //aur yaha par hame neighur nikalna hai 
    for(auto ele : graph[curr]){
        if(visited.find(ele)==visited.end()){
            bool res=dfs(ele,end);
            if(res) return true;
        }
    }
    return false;
}
bool isanypath(int src,int desi){
    return dfs(src,desi);
}
void display(){
    for(int i=0;i<graph.size();i++){
        std::cout<<i<<" - > ";
        for(auto ele : graph[i]){
           std::cout<<ele<<" ";
        }
        std::cout<<std::endl;
    }
}
int main(){
     std::cin>>v;
     graph.resize(v);
    int e;
    std::cin>>e;
    visited.clear();
    while(e--){
        int s,d;
        std::cin>>s>>d;
        add_edge(s,d);
    }
    display();
    
    //here put the two vertecx
    int a,b;
    std::cin>>a>>b;
    std::cout<<isanypath(a,b);
}
