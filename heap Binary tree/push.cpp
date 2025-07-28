#include<iostream>
class minheap{
    public:
    int arr[50];
    int idx;
    minheap(){
        idx=1;
    }
    int top(){
        return arr[1];
    }
    void push(int x){
        arr[idx]=x;
        int i=idx;
        idx++;
        while(i!=1){
            int parent=i/2;
            if(arr[parent]>arr[i]){
                std::swap(arr[parent],arr[i]);
            }
            else break;
            i=parent;
        }
        
        
    }
    int size(){
        return idx-1;
    }
};
int main(){
    minheap pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    std::cout<<pq.top()<<" "<<pq.size();
    
}
