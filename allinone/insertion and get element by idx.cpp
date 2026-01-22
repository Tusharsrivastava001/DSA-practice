#include<iostream>
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
    Node*head;
    Node*tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node*temp=new Node(val);
        if(size==0)head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node*temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAtidx(int idx,int val){
        if(idx<0 || idx>size){
            std::cout<<"Invalid index"<<std::endl;
        }
        else if(idx==0){
            insertAtHead(val);
        }
        else if(idx==size){
            insertAtEnd(val);
        }
        else{
            Node*t=new Node(val); 
            Node*temp=head;
            for(int i=1;i<=(idx-1);i++){
                temp=temp->next;
            } // jaha break karna hia uske phele ka tail tal travrese karo Linke 
            // 10 20 toh temp ko 20 tak pauchao and then 20 and 70 ko link karo then 70 ko 30 se linkk karo taki beech me aa sake
            t->next=temp->next; // 70 ko 30 se link kar diya do
            temp->next=t; // 70 se link kar diay 20 ko 
            size++;
        }
    }
    void getelement(int idx){
        if(idx<0 || idx>=size) return;
        else if(idx==0) std::cout<<head->val;
        else if(idx==size-1){
            std::cout<<tail->val;
        }
        else{
            Node*temp=head;
            for(int i=1;i<=idx;i++){
                temp=temp->next;
            }
            size++;
            std::cout<<temp->val;
        }
        
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            std::cout<<temp->val<<" ";
            temp=temp->next;
        }
        std::cout<<std::endl;
        
    }

};
int main(){
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.display();
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    ll.insertAtHead(50);
    ll.display();
    ll.insertAtHead(24);
    ll.display();
    ll.insertAtidx(4,80);
    ll.display();
    ll.getelement(4);
    
}
