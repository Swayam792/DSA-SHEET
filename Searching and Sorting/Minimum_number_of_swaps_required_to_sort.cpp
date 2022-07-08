#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public: 
	int minSwaps(vector<int>&nums)
	{ 
	    int count=0;
	    map<int,int> m;
	    for(int i=0;i<nums.size();i++){
	        m[nums[i]]=i;
	    }
	    vector<int> v=nums;
	    sort(v.begin(),v.end());
	    for(int i=0;i<nums.size();i++){
            // if the sorted element and present element not matched than we have put them into there corresponding correct position
	        if(v[i]!=nums[i]){	           
	           int index=m[v[i]];
	           m[nums[i]]=index;
	           m[v[i]]=i;
	           swap(nums[i],nums[index]);
	           count++;
	        }
	    }
	    return count;
	}
};

// Time Complexity - O(NlogN)
// Auxiliary Space - O(N)
