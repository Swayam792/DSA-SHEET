#include<bits/stdc++.h>
using namespace std;

class Solution{
  public: 
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        long long prod = 1;
        long long c = 0;
        for(auto x: nums){
            if(x == 0){
                c++;
            }
            if(x != 0){
                 prod *= 1ll*x;
            }
        }
        
        for(int i = 0; i < n; i++){
            if(c >= 2){
                nums[i] = 0;
            }else{
                if(nums[i] == 0){
                   nums[i] = prod;
                }else{
                    if(c >= 1){
                        nums[i] = 0;
                    }else{
                        nums[i] = prod/nums[i];
                    }
                }
            }
        }
        return nums;
    }
};

// Time Complexity - O(N)
// Auxiliary Space - O(1)