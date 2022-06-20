#include <bits/stdc++.h>

using namespace std;
 
class Solution{
public:
 
	long long maxProduct(vector<int> arr, int n) {	    
	    long long ans = arr[0];
	    long long ma = arr[0], mi = arr[0];
	    for(int i = 1; i < n; i++){
	        if(arr[i] < 0){ // We have to make the ma larger, so if the element is negetive then the multiplication with ma leads to smaller negetive number, that we don't want, so we are swapping so the overall value should be maximum
	            swap(ma,mi);
	        }
	        if(arr[i] < ma*arr[i]){
	            ma = ma*arr[i];
	        }else{
	            ma = arr[i];
	        }
	        if(arr[i] > mi*arr[i]){
	            mi = mi*arr[i];
	        }else{
	            mi = arr[i];
	        } 
	        ans = max(ans,ma); // answer should be either the current maximum or previous maximum
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
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  
// Time Complexity - O(N)