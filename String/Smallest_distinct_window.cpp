#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    int findSubString(string str)
    { 
        set<char> s;
        for(auto x: str){
            s.insert(x);
        }
        int n = s.size();
        int count = 0;
        unordered_map<char,int> m;
        int i = 0 , j = 0;
        int mini = INT_MAX;
        while(j < str.size()){
            // we are iterate untill the window has the all the element of string 
            if(j != str.size() and count < n){
                m[str[j]]++;
                if(m[str[j]] == 1){
                    count++;
                }
            }
            // if we find the window having all the element of the string then find the smallest one
            if(count == n){
                while(i <= j and count == n){
                    m[str[i]]--;
                    if(m[str[i]] == 0){
                        count--;
                    }
                    i++;
                }
                mini = min(mini, j - (i-1) + 1);
            }
            j++;
        }
       
        return mini;
    }
}; 

int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  

// Time Complexity - O(N) - N - SIZE OF STRING
// Auxiliary space - O(N) - N - SIZE OF STRING