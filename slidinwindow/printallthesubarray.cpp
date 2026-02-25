#include<iostream>
#include<vector>
int main(){
    int n;
    std::cin>>n;
    std::vector<int> v(n);
    for(int i=0;i<n;i++){
        std::cin>>v[i];
    }
    std::cout<<"Here we have to print all the subaray "<<std::endl;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            //here we have to print all teh subarray 
            for(int e=i;e<=j;e++){
                std::cout<<v[e]<<" ";
            }
            std::cout<<std::endl;
        }
    }
    
}
