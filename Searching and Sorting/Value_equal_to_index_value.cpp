#include<bits/stdc++.h>

using namespace std;
 
class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    int ind;
	    vector<int> ans;
	    for(int i = 1; i <= n; i++){
            // if the index value equal to array value 
	        if(arr[i-1] == i){
	            ans.push_back(i);
	        }
	    }
	    return ans;
	}
}; 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.valueEqualToIndex(arr, n);
        if (ans.empty()) {
            cout << "Not Found";
        } else {
            for (int x: ans) {
                cout << x << " ";
            }
        }
        cout << "\n";
    }
    return 0;
} 

// Time Complexity - O(N)
// Auxiliary Space - O(1)