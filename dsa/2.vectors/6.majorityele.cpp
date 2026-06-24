#include <iostream>
#include <vector>
using namespace std;

//problem number 169(mejorith element) in leetcode
//finding the elemnt that apeard more than half of the number of wlwments in the array

// int bruteforce(vector<int> nums){
//     int mj= nums.size()/2;
//     int n= nums.size();

//     for (int i=0;i<n;i++){
//          int count=0;
//         for (int j =0; j<n;j++)
//         {
//             if(nums[i]==nums[j]){
//                 count++ ;
//             }
//         if (count >mj){
//             return nums[i];
//         }
//         }
//     }
//     return -1;
// }

int mooresvoting(vector <int>& nums){
    int freq=0;
    int ans=0;
    int n=nums.size();
    for (int i=0;i<n;i++){
        if(freq==0){
             ans=nums[i];
        }
        if(ans==nums[i]){
       
            freq++;
        
    }
        else{
            freq--;
        }
    }
    return ans;
    
}

int main(){
    vector<int> nums={1,2,1,2,2};
    // cout<<"the mejority element is "<< bruteforce(nums);
    cout<<"the mejority element is "<< mooresvoting(nums);
    return 0;
}