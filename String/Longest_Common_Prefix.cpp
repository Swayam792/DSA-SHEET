#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string st = strs[0];
        int len = INT_MAX;
        if(strs.size() == 0){
            return "";
        }
        
        for(int i = 1; i < strs.size();i++){
            int j = 0, k = 0, a = 0;
            // Check for every character in the string
            while(j < st.size() and k < strs[i].size()){
                if(st[j] == strs[i][k]){
                    j++,k++;
                    a++;
                }else{
                    break;
                }
            }
            // take the minimum which tell use the minimum length string that matched
            len = min(len,a);
        }
        return st.substr(0,len);
    }
};

// Time Complexity - O(N*K) N - size of input string K - size of the longest input string
// Auxiliary Space - O(1)