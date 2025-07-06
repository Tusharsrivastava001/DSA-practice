#include<iostream>
#include<set>
#include<unordered_set>
int main(){
    std::unordered_set<int> s;
    s.insert(990);
    s.insert(45);
    s.insert(78);
    s.insert(78);
    s.insert(425);
    s.insert(781);
    
    std::cout<<s.size()<<" "<<std::endl;
    for(int x : s){//using of the for each without index
        std::cout<<x<<" "; 
    }
    int tar=785;
    if(s.find(tar)!=s.end()){ 
        std::cout<<"exits";
    }
    else{
        std::cout<<"not exits";
    }
    //exits or not 

    
    
}
