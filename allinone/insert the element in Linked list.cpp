#include<iostream>
class Node{
    public:
    int val;
    Node*next; // address store karega next node ki
    Node(int v){
        this->val=v;
        this->next=NULL;
    }
};
class Linkedlist{
    public:
    int size;
    Node*head;
    Node*tail;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertAtEnd(int val){
        Node*temp=new Node(val); // temp naam ka pointer ban gaya jo ek node ko point karega
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void display(){
        Node *temp=head;
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
     std::cout<<ll.size<<std::endl;
    ll.insertAtEnd(20);
    ll.display();
     std::cout<<ll.size<<std::endl;
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();
    std::cout<<ll.size;
    
}