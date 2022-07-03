#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        while(i <= j){
            int mid = (i+j)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] >= nums[i]){
                // if the array from point i to mid is increasing
                if(target>=nums[i] and target<nums[mid]){
                    j=mid-1;
                }else{
                    i=mid+1;
                }
            }else{
                if(target>nums[mid] and target<=nums[j]){
                    i=mid+1;
                }else{
                    j=mid-1;
                }
            }
        }
        return -1;
    }
};

// Time complexity - O(logN)
// Auxiliary Space - O(1)