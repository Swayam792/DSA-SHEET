#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public: 

    bool find3Numbers(int A[], int n, int X)
    {
        sort(A,A+n);
        for(int i = 0; i < n-2; i++){
        int l = i+1, r = n-1;
        int req = X - A[i];
        while(l < r){
            if(A[l] + A[r] == req){
                return true;
            }else if(A[l] + A[r] > req){
                r --;
            }else{
                l++;
            }
        }
    }
    return false;
    }
};
 

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
} 

// Time Complexity - O(n^2) Auxiliary space - O(1)