#include <bits/stdc++.h> 
using namespace std; 
 
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    { 
        string ans = "";
        for(int i = 0; i < S.size();){
            ans += S[i];
            i++;
            // if the character is same as the previous charcter then we need to skip it
            while(i < S.size() and S[i] == S[i-1]){
                i++;
            }
        }
        return ans;
    }
};
 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.removeConsecutiveCharacter(s)<<endl;
    }
}  

// Time Complexity - O(N) N - size of the string
// Space Complexity - O(1)