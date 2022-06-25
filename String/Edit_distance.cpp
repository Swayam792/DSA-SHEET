#include <bits/stdc++.h>
using namespace std;
 
class Solution {
  public:
    int solve(int i,int j,string s,string t,vector<vector<int>> &dp){
        if(i == 0 || j == 0){
           return max(i,j);
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        
        if(s[i-1] == t[j-1]){
            return dp[i][j] = solve(i-1,j-1,s,t,dp);
        }else{
            return dp[i][j] = 1 + min(solve(i-1,j-1,s,t,dp),min(solve(i-1,j,s,t,dp),solve(i,j-1,s,t,dp)));
        }
    }
    
    int editDistance(string s, string t) {
        // Code here
        int n = s.size(), m = t.size();
        int i = 0, j = 0;
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        int ans = solve(n,m,s,t,dp);
        return ans;
    }
}; 
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
} 

// Time Complexity - O(N*M) Auxiliary Space - O(N*M) + stack space for recursion