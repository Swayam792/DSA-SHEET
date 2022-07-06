#include <bits/stdc++.h>
using namespace std;
 

class Solution{
    public: 
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
       
        sort(arr.begin(),arr.end());
        set<vector<int>> ans;
        int n = arr.size();
        for(int i = 0; i < n-3; i++){
            for(int j = i+1; j < n-2;j++){
               int start = j+1, end = n-1;
               while(start < end){
                   int sum =  arr[i] + arr[j] + arr[start] + arr[end];
                   if(sum > k){
                       end--;
                   }else if(sum < k){
                       start++;
                   }else{
                       ans.insert({arr[i],arr[j],arr[start],arr[end]});
                       start++;
                       end--;
                   }
               }
            }
        }
        vector<vector<int>> ans2;
        for(auto x: ans){
            ans2.push_back(x);
        }
        return ans2;
    }
}; 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}  

// Time Complexity -O(N^3log(S)) - S is the size of answer array
// Auxiliary Space - O(S*4) - S is the size of answer array