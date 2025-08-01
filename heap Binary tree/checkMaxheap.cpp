#include<iostream>
#include<vector>
#include<queue>
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void inorder(Node*root,std::vector<int> &v){
    if(root==NULL) return;
     inorder(root->right,v);
   
    v.push_back(root->val);
    inorder(root->left,v);
    
}
void preorder(Node*root,std::vector<int> &v,int &i){
    
     if(root==NULL) return;
     root->val=v[i++];
     
     preorder(root->left,v,i);
     preorder(root->right,v,i);
}
int level(Node*root){
    if(root==NULL) return 0;
    return 1+level(root->left)+level(root->right);
}
void display(Node*root,int curr,int leveli){
    if(root==NULL) return ;
    if(curr==leveli){
    std::cout<<root->val<<" ";
    return;
    }
    display(root->left,curr+1,leveli);
    display(root->right,curr+1,leveli);
}
void levelorder(Node*root){
    int n=level(root);
    for(int i=1;i<=n;i++){
        display(root,1,i);
        std::cout<<std::endl;
    }
}
bool ismax(Node*root){
    if(root==NULL) return true;
    if(root->left!=NULL && root->val<root->left->val) return false;
    if(root->right!=NULL && root->val<root->right->val) return false;
    return ismax(root->left) && ismax(root->right);
}
bool iscbt(Node*root){
    std::queue<Node*> q;
    q.push(root);
    bool end=false;
   while(!q.empty()){
       Node*temp=q.front();
       q.pop();
       if(temp==nullptr) end=true;
       else{
           if(end==true) return false;
           q.push(temp->left);
           q.push(temp->right);
       }
   }
   return true;
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(5);
    Node*c=new Node(16);
    Node*d=new Node(1);
    Node*e=new Node(8);
    Node*f=new Node(12);
    Node*g=new Node(20);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    std::vector<int> res;
    inorder(a,res);
    
    for(int ele : res){
        std::cout<<ele<<" ";
    }
    int i=0;
    preorder(a,res,i);
    std::cout<<std::endl;
    
    //here we aer copyint the revser sorte array into the bst 
    //in the same tree
    levelorder(a);
    std::cout<<std::endl;
    if(iscbt(a) && ismax(a)) std::cout<<"yes";
    

}
