// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
int main() {
    
    std::pair<std::string,int> p;
    p.first="joohn";
    p.second=89;
    std::unordered_map<std::string, int> m;
    
    std::pair<std::string,int> p2;
    p2.first="harsh";
    p2.second=829;
    std::pair<std::string,int> p3;
    p3.first="alex";
    p3.second=8289;
    
    m.insert(p);
    m.insert(p2);
    m.insert(p3);
    
    
    for(std::pair ele : m){
        std::cout<<ele.first<<"  "<<ele.second<<std::endl;
    }
    return 0;
}
