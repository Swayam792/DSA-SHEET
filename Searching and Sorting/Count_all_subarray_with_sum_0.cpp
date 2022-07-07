#include<bits/stdc++.h>
using namespace std;

#define ll long long

class Solution{
    public: 
    ll findSubarray(vector<ll> arr, int n ) {
      
        unordered_map<ll,ll> m;
        ll sum = 0, ans = 0;
        // calculating the subarray
        for(auto x: arr){
            sum += x;
            if(sum == 0){
                ans++;
            }
            // if the given sum is previously occure then sum of element from previous position to curr is all zero, so we can add it to our answer
            if(m[sum] > 0){
                ans += m[sum];
            }
            m[sum]++;
        }
        
        return ans;
    }
};

// Time Complexity - O(N)
// Space Complexity - O(N)