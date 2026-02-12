#include<stack>
#include<iostream>
#include<algorithm>
class stack{
    public:
    int arr[10];
    int idx;
    stack(){
        idx=-1;
    }
    //here is the some operation of the stack 
    void push(int val){
        if(idx==9){
            std::cout<<"Stack is full man"<<std::endl;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1) {
            std::cout<<"Stack is empty man there is no need to pop"<<std::endl;
        }
        idx--;
    }
    int top(){
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    bool isfull(){
        return idx==9;
        //agar ye -1 hai toh true dega other wise false dega
    }
    bool isempty(){
        return idx==-1;
    }
    void display(){
        for(int i=0;i<=idx;i++){
            std::cout<<arr[i]<<" ";
        }
    }
};
int main(){
    stack s1;
    std::cout<<s1.isempty()<<std::endl;
    s1.push(10);
    std::cout<<s1.isempty()<<std::endl;
    s1.push(20);
    s1.push(30);
    s1.push(50);
    s1.push(60);
    s1.push(70);
    s1.display();
    std::cout<<s1.top()<<" ";
    std::cout<<std::endl;
    s1.pop();
    std::cout<<std::endl;
    s1.display();
    std::cout<<std::endl;
    std::cout<<s1.size();
    
}
