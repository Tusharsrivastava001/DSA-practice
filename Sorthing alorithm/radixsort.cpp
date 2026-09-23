#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void countingsort(std::vector<int> &arr,int exp){
    int n=arr.size();
    //like ones k liye tens k liyee 100 ki liyee sort karenge
    std::vector<int> out(n);
    int count[10]={0};
    for(int i=0;i<n;i++){
        int digit=(arr[i]/exp)%10;
        count[digit]++;
    }
     // Prefix sum
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build output from RIGHT to LEFT
    for (int i = n - 1; i >= 0; i--) {

        int digit = (arr[i] / exp) % 10;

        out[count[digit] - 1] = arr[i];

        count[digit]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = out[i];
    }
}
void radixsort(std::vector<int> &arr){
    int mx=arr[0];
    for(int x : arr){
        mx=std::max(x,mx);
    }
    //here we haev to process every digit okay
    for(int exp=1;mx/exp>0;exp*=10){
        countingsort(arr,exp);
    }
}
int main(){
    
     vector<int> arr = {
        170, 45, 75, 90,
        802, 24, 2, 66
    };
    radixsort(arr);

    for(int x : arr){
        std::cout<<x<<" ";
    }
}
