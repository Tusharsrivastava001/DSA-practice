#include<iostream>
#include<vector>
int main(){
    //here are tryin to get all the possible value of subset
    std::vector<int> arr={1,2,3};
    int n=arr.size();
    int total=1<<n; //ye jo hai vo 2^n calcualet karega jo total subset calcaute karega
    std::vector<std::vector<int>> v;
    for(int mask=0;mask<total;mask++){ // 0 to 7 tak binary number hai
    std::vector<int> subset;
        for(int i=0;i<n;i++){
            if((mask >> i) & 1) subset.push_back(arr[i]);  //right shift aur 1 
            // chaihiye hamne
            
        }
        
        v.push_back({subset});
    }
    
    for(auto ele : v) {
        std::cout<<"(";
        for(auto e : ele){
            std::cout<<e<<" ";
        }
        std::cout<<")";
    }
}
