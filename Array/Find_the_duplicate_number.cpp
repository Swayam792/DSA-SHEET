#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int num,ans=0;
        for(auto x:nums){  
            x=abs(x);
            if(nums[x]<0){
                ans= x;
                break;
            }else{
                nums[x]*=-1;
            }
        }
        return ans;
    }
};