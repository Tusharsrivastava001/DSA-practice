#include<iostream>
struct Node{
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val=val;
        this->next=nullptr;
        this->prev=nullptr;
    }
};
class DLL{
    public:
    Node*head;
    Node*tail;
    int size;
    DLL(){
        head=tail=nullptr;
        size=0;
    }
    void insertathead(int val){
        Node*newNode=new Node(val);
        if(head==nullptr) head=tail=newNode;
        else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        size++;
    }
    void insertatend(int val){
        Node*newNode=new Node(val);
        if(tail==nullptr) head=tail=newNode;
        else{
            newNode->prev=tail;
            tail->next=newNode;
            tail=newNode;
        }
        size++;
    }
    void display(){
        Node*temp=head;
        while(temp!=nullptr){
            std::cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
     void insertatpos(int val,int pos){
        if(pos==0){
            insertathead(val);
            return;
        }
        if(pos==size){
            insertatend(val);
            return;
        }
        Node*newNode=new Node(val);
        Node*curr=head;
        for(int i=0;i<pos-2;i++){
            curr=curr->next;
        }
        newNode->next=curr->next;
        newNode->prev=curr;
        
        if(curr->next!=nullptr){
            curr->next->prev=newNode;
        }
        curr->next=newNode;
        size++;
    }
};
int main(){
    DLL l1;
    l1.insertatend(10);
    l1.insertatend(20);
    l1.insertatend(30);
    l1.insertatend(40);
    l1.insertatend(50);
    l1.insertathead(88);
    l1.display();
    
}