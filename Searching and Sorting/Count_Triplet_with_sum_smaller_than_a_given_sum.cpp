#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	#define ll long long
	
	long long countTriplets(long long arr[], int n, long long sum)
	{  
	    sort(arr,arr+n);
	    long long c = 0;
	    for(int i = 0 ; i < n; i++){
	        int left = i+1, right = n-1;
	        long long req = sum - arr[i];
	        // finding the count
	        while(left < right){
	            long long s = arr[left] + arr[right];
	            if(req > s){
	                c += (right - left);
	                left++;
	            }else{
	                right--;
	            }
	        }
	    }
	    return c;
	} 	 
};

// Time Complexity - O(N^2)
// Auxiliary Space - O(1)