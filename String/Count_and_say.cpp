#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        string ans = countAndSay(n-1);
        int c = 0;char ch = ans[0];
        string a = "";
        for(int i = 0; i < ans.size(); i++){
            if(ch == ans[i]){
                c++;
            }else{
                a += to_string(c) + ch;
                ch = ans[i];
                c = 1;
            }
        }
        a += to_string(c) + ch;
        return a;
    }
};

// Time Complexity - O(N*K) K - Is the average length of the string
// Space Complexity - O(K)
