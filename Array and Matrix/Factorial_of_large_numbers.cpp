 
#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    vector<int> factorial(int N){       
        if(N == 0){
            return {1};
        }
        vector<int> ans;
        ans.push_back(1);
        int mul;
        int carry = 0;
        for(int i = 2; i <= N; i++){
            for(int j = 0; j < ans.size(); j++){
                mul = ans[j]*i + carry; // calculate the multiplication with previously available data
                ans[j] = mul % 10;
                carry = mul / 10;
            }
            while(carry){ // if carry left
                ans.push_back(carry%10);
                carry /= 10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}   

// Time Complexity - O(N^2)