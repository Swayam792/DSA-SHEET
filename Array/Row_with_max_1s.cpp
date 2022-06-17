#include <bits/stdc++.h>
using namespace std;
 
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxi = 0, ind = -1;
	    for(int i = 0; i < m; i++){
	        for(int j = 0; j < n; j++){
	          if(arr[j][i] == 1){ // by traversing column wise if the row in which we get our first 1 is the ans because it matrix is sorted row wise
	              return j;
	          }
	        }
	    }
	    return -1;
	}

};
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
} 

// Time Complexity - O(n*m) 