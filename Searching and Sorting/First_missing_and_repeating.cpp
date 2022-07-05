#include <bits/stdc++.h>

using namespace std;
 
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        vector<int> vis(n+1,0);
        // maping all the element with its count 
        for(int i = 0; i < n; i++){
            vis[*(arr+i)]++;          
        }
        
        int ans[2] = {0};
        int *ptr = ans;
        // if any number reapted then its frequency is 2 else if any numberr missing its frequency would be 0
        for(int i = 1; i <= n; i++){
            if(vis[i] == 0){
                ans[1] = i;
            }else if(vis[i] == 2){
                ans[0] = i;
            }
        }
        return ptr;
    }
}; 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  

// Time Complexity- O(n)
// Auxiliary Space - O(N)