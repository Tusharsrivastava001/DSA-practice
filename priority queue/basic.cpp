
#include<iostream>
#include<queue>
#include<queue>
int main(){
    std::priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    
    pq.push(30);
    pq.push(900);
    std::cout<<pq.top()<<" ";
    pq.pop();
    std::cout<<pq.top();
    //by default max head banta hai
    
    
    //here for the minheap
    std::cout<<std::endl;
    std::priority_queue<int , std::vector<int> , std::greater<int>> mq;
    mq.push(10);
    mq.push(20);
    
    mq.push(30);
    mq.push(900);
    std::cout<<mq.top()<<" ";
    mq.pop();
    std::cout<<mq.top();
   
    
    
}
