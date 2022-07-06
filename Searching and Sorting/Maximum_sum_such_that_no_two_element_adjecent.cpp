#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
class Solution
{
    public: 
    int FindMaxSum(int arr[], int n)
    {
       int a = arr[0];
       int b = max(arr[0], arr[1]);
       int c;
       if(n==1) return a;
       if(n==2) return b;
       for(int i=2; i<n; i++){
           c = max(arr[i]+a, b);
           a = b;
           b = c;
       }
       return c;
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
		int a[n];
		 
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob; 
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
} 

// Time Complexity - O(N)
// Space Complexity - O(1)