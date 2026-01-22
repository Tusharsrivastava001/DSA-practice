#include<iostream>
class Node{
    public:
    int val;
    Node*next;
    Node(int v){
        this->val=v;
        this->next=NULL;
    }
};
void displayrec(Node*head) // head pointer = address ho raha hai
{
    if(head==NULL) return;
    displayrec(head->next);
    std::cout<<head->val<<" ";
}
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    displayrec(a);
}