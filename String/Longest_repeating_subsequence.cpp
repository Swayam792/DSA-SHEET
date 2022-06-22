#include<bits/stdc++.h>
using namespace std;
 
class Solution {
	public:
		int LongestRepeatingSubsequence(string s){
		    // Code here
		   vector<vector<int>> dp(s.size()+1,vector<int>(s.size()+1));
        for(int i=0;i<=s.size();i++){
            for(int j=0;j<=s.size();j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
                else if(s[i-1]==s[j-1] and i!=j){
                    dp[i][j]=1+dp[i-1][j-1];
                }else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[s.size()][s.size()];
		    
	}

}; 
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  

// Time Complexity - O(N*N) Space Compelxity - O(N*N)