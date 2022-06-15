
#include <bits/stdc++.h>
using namespace std;
 
class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] <= k){
                cnt++;
            }
        }
        int required = 0;
        for(int i = 0; i < cnt; i++){
            if(arr[i] > k){
                required++;
            }
        }
        int ans = required;
        for(int i = 0, j = cnt; j < n;i++,j++){
            if(arr[i] > k){
                required--;
            }
            if(arr[j] > k){
                required++;
            }
            ans = min(ans, required);
        }
        return ans;
    }
};

 
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
} 

// Time complexity - O(N)  