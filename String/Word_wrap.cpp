 
#include<bits/stdc++.h>
using namespace std;
 

class Solution {
public:
  int dp[500][2000];
   int recur(int i,int rem,vector<int> arr,int k)
   {
       if(i==arr.size())
        return 0;
       if(dp[i][rem]!=-1)
        return dp[i][rem];
       int ans=0;
       int choice1=0,choice2=0;
       if(arr[i]>rem)
       {
           ans = (rem+1)*(rem+1) + recur(i+1,k - arr[i]-1,arr,k);
       }else
       {
           choice1= (rem+1)*(rem+1) + recur(i+1,k - arr[i]-1,arr,k);
           choice2= recur(i+1,rem-arr[i]-1,arr,k);
           ans = min(choice1,choice2);
       }
       dp[i][rem]=ans;
       return ans;
   }
   int solveWordWrap(vector<int>nums, int k) 
   {  
       memset(dp,-1,sizeof(dp));
       return recur(0,k,nums,k);
   } 
}; 
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}  