 
#include <bits/stdc++.h>
using namespace std;
 
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        unordered_map<int,int> m;
        int sum = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(m[k - arr[i]]){
                ans += m[k - arr[i]]; // count the pairs
            }
            m[arr[i]]++;
        }
        return ans;
    }
};
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  