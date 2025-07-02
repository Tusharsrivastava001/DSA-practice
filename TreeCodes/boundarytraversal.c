// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
#include <climits>
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
// int level(Node*root){
//     if(root==NULL) return 0;
//     return 1+std::max(level(root->left),level(root->right));
    
// }

// void display(Node*root,int curr,int leveli){
//     if(root==NULL) return ;
//     if(curr==leveli){
//     std::cout<<root->val<<" ";
//     return;
//     }
//     display(root->left,curr+1,leveli);
//     display(root->right,curr+1,leveli);
// }
// void levelorder(Node*root){
//     int n=level(root);
//     for(int i=1;i<=n;i++){
//         display(root,1,i);
//         std::cout<<std::endl;
//     }
// }
Node*construct(int arr[],int n){
    Node*root=new Node(arr[0]);
    std::queue<Node*> q;
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node*temp=q.front();
        q.pop();
        Node*l;
        Node*r;
        if(arr[i]!=INT_MIN) l=new Node(arr[i]);
        else {
            l=NULL;
        }
        if(arr[j]!=INT_MIN) r=new Node(arr[j]);
        else{
            r=NULL;
        }
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
    
}

void leftBoundary(Node*root){
    if(root==NULL) return;
    
    if(root->left==NULL && root->right==NULL) return;
    std::cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL){
    leftBoundary(root->right);
    }
    
}
void rightBoundary(Node*root){
    if(root==NULL) return;
    
    if(root->left==NULL && root->right==NULL) return;
    
    rightBoundary(root->right);
    if(root->right==NULL){
    rightBoundary(root->left);
    }
    std::cout<<root->val<<" ";
    
}
void leaf(Node*root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        std::cout<<root->val<<" ";
    }
    leaf(root->left);
    leaf(root->right);
}

int main() {
    int arr[]={1,2,3,4,5,INT_MIN,6,7,INT_MIN,8,INT_MIN,9,10,INT_MIN,11,INT_MIN,12,INT_MIN,13,INT_MIN,14,15,16,INT_MIN,17,INT_MIN,INT_MIN,18,INT_MIN,19,INT_MIN,INT_MIN,INT_MIN,20,21,22,23,INT_MIN,24,25,26,27,INT_MIN,INT_MIN,28};
   
   int n=sizeof(arr)/sizeof(arr[0]);
   Node*root=construct(arr,n);
   leftBoundary(root);
   leaf(root);
   rightBoundary(root->right);
//   levelorder(root);
    return 0;
}
