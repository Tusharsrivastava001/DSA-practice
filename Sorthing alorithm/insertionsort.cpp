#include<iostream>
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[]={5,2,4,6,1,3};
    int n=6;
    insertionsort(arr,n);
    
    for(auto ele : arr){
        std::cout<<ele<<" ";
    }
}
