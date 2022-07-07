#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    
	    int i = n-1, j = 0;
        // as we know that the array if already sorted so we can iterate the first array from last and second array from first
	    while(i >=0 and j < m){
	        if(arr1[i] > arr2[j]){
	            swap(arr1[i],arr2[j]);
	        }
	        j++;
	        i--;
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	}
};

// Time Complexity - O((n+m)log(n+m))
// Space Complexity - O(1)
