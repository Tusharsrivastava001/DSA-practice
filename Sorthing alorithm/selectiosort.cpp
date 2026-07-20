#include<iostream>
#include<vector>
#include<algorithm>

void selectionsort(std::vector<int> &arr,int n){
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        std::swap(arr[i],arr[minidx]);
    }
}
int main(){
    std::vector<int> arr(5);
    arr={64,25,12,22,11};
    
    selectionsort(arr,arr.size());
    
    for(auto ele: arr){
        std::cout<<ele<<" ";
    }
}
