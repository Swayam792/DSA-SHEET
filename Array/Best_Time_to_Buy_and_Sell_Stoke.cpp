#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0],maxi=0;
        for(int i=1;i<prices.size();i++){
            int cost=prices[i]-mini;
            maxi=max(maxi,cost); // Find the maximum profit
            mini=min(mini,prices[i]);// Find the day when we buy the stoke
        }
        return maxi;
    }
};

// Time Complexity - O(N) Space Complexity - O(1)