#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
     
    int countSquares(int N) {
       int ans = sqrt(N-1);
       return ans;
    }
}; 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}

// Time Complexity - O(Sqrt(N))