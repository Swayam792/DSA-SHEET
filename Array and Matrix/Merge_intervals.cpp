#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        int i = 0, j = 0;
        vector<vector<int>> ans;
        int maxi = 0;
        while(j < n){
            maxi = intervals[j][0];
            while(j < n and maxi >= intervals[j][0]){
                maxi = max(maxi, intervals[j][1]);
                j++;                
            }
            ans.push_back({intervals[i][0],maxi});
            i = j;             
        }
       
        return ans;
    }    
};

// Time Complexity - O(NlogN) Auxiliary Space - O(P*2)- where P is the size of ans vector 