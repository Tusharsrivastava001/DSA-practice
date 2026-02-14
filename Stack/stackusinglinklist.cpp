#include<iostream>
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=nullptr;
    }
};
class Stack{
    public:
    Node*head;
    int size;
    Stack(){
        head=nullptr;
    }
    void push(int val){
        Node*newnode=new Node(val);
        newnode->next=head;
        head=newnode;
        size++;
    }
    int pop(){
        if(head==nullptr) return -1;
        int val=head->val;
        head=head->next;
        size--;
        return val;
    }
    int top(){
        return head->val;
    }
    void display(){
        Node*temp=head;
        while(temp!=nullptr){
            std::cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    Stack s1;
    
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.display();
    std::cout<<s1.top();
    std::cout<<"This is deleted top"<<s1.pop();
    std::cout<<std::endl;
    s1.display();
}
