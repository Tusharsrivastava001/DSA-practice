#include<iostream>
class queue{
    public:
    int arr[10];
    int f;
    int b;
    queue(){
        f=0;
        b=0;
    }
    void push(int val){
        if(b==9) std::cout<<"Stack is full man";
        arr[b]=val;
        b++;
    }
    void pop(){
        if((f-b)==0){
        std::cout<<"Queue is empty"<<std::endl;
        }
        f++;
    }
    int front(){
        if((f-b)==0){
            std::cout<<"Queue is empty";
            return -1;
        }
        return arr[f];
    }
    int back(){
        if((f-b)==0){
            std::cout<<"Queue is empty";
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    void display(){
        for(int i=f;i<b;i++){
           std::cout<<arr[i]<<" "; 
        }
        std::cout<<std::endl;
    }
};
int main(){
    queue s;
    s.push(10);
    s.push(20);
    s.display();
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.display(); 
    std::cout<<s.front();
    std::cout<<s.back();
}
