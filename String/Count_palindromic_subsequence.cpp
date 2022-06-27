// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    long long int mod = 1e9+7;
    long long int  countPS(string str)
    {
       //Your code here
       int n = str.size();
       vector<vector<long long>> dp(n+1,vector<long long> (n+1,0));
       
       for(int i = n-1; i >= 0; i--){
           for(int j = 0; j < n; j++){
               if(i == j){
                   dp[i][j] = 1;
               }
               else if(i > j){
                   dp[i][j] = 0;
               }else{
                    long long match = 0, no_match = 0;
                    // If the ith and jth character matched then we add to our palindromic sequence and check for remaining
                    if(str[i] == str[j]){
                        dp[i][j] = (1 + dp[i+1][j]%mod + dp[i][j-1]%mod + mod)%mod;
                    }else{
                        // else we check for remaining and substract the commonly added palindome 
                        no_match = (dp[i+1][j]%mod + dp[i][j-1]%mod + mod)%mod;
                        no_match -= dp[i+1][j-1]%mod;
                        dp[i][j] = no_match%mod;
                    }
               }
           }
       }
       long long ans = dp[0][n-1]%mod;
       return ans;
    }
     
}; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}  

// Time complexity - O(N*N)
// Auxiliary Space - O(N*N)