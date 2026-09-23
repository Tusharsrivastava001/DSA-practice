#include<iostream>
#include<vector>
#include<algorithm>
void merge(std::vector<int> &a,std::vector<int>&b,std::vector<int> &c){
    int i=0;
    int j=0;
    int k=0;
    int m=a.size();
    int n=b.size();
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=b[j++];
        }
    }
    while(i<m){
        c[k++]=a[i++];
    }
    while(j<n){
        c[k++]=b[j++];
    }
}
void mergesort(std::vector<int> &v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    std::vector<int> v1(n1);
    std::vector<int> v2(n2);
    for(int i=0;i<n1;i++){
        v1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=v[i+n1];
    }
    mergesort(v1);
    mergesort(v2);
    merge(v1,v2,v);
    
}
int main(){
    std::vector<int> arr={1,2,2,3,34,4,5,5,566,66,666};
    mergesort(arr);

    for(int x : arr){
        std::cout<<x<<" ";
    }
}
