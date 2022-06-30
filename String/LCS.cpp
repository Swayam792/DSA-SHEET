#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;
 

class Solution
{
    public: 
    int lcs(int x, int y, string s1, string s2)
    {
        // this is the recursive solution
        
        // if(x == 0 || y == 0){
        //     return 0;
        // }
        
        // if(s1[x-1] == s2[y-1]){
        //     return 1 + lcs(x-1,y-1,s1,s2);
        // }else{
        //     return max(lcs(x-1,y,s1,s2), lcs(x,y-1,s1,s2));
        // }
        
        // This is dynamic programming solution
        vector<vector<int>> dp(x+1,vector<int> (y+1));
        
        for(int i = 0; i <= x; i++){
            for(int j = 0; j <= y; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                    continue;
                }
                // if the ith character of s1 and jth character of s2 matched then we add 1 to our ans else we see the maximum value we can get from i-1 or j-1
                if(s1[i-1] == s2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        return dp[x][y];
    }
};
 
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
} 

// Time complexity - O(N*M), N - size of the string 1, M - size of string2
// Space Complexity - O(N*M), N - size of the string 1, M - size of string2