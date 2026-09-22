// Online C++ compiler (editor)
// Write and run C++ online using this editor.

#include <iostream>
#include<vector>
#include<algorithm>
int main() {
    // Write C++ code here
    
    std::cout << "Try clicking the Run button. countingg sort -- ";
    std::vector<int> arr={2,2,2,1,3,4,4,4,4,5};
    std::cout<<arr.size();
    //here we have to calur the max and min so that we can define the range
    int mx=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    std::cout<<std::endl;
    std::vector<int> count(mx+1);
    //here calucate the freq
    for(int i : arr){
        count[i]++;
    }

    int index=0;
    for(int value=0;value<=mx;value++){
        while(count[value]>0){
            arr[index]=value;
            index++;
            count[value]--;
        }
    }
    for(int i : arr){
        std::cout<<i<<" ";
    }
}
