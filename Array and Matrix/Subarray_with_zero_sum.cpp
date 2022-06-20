 
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
  
    bool subArrayExists(int arr[], int n)
    {
         
        unordered_map<int,int> m;
        int sum = 0;
        m[0]++; // Edge case - when total array have sum zero
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(m[sum]){ // if given sum exist before than from the index there the same sum exist to the current position having sum zero
                return true;
            }
            m[sum]++;
        }
        return false;
    }
};
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}  

// Time Compleixty - O(N) and Auxiliary space - O(N)