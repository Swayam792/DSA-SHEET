 
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
 

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
       
        map<string, vector<string>> m;
        for(auto x: string_list){
            string st = x;
            // the idea is if we are sorting the array all the string belongs to same anagram will be stored in respective group. So i am using map to do that so.
            sort(x.begin(),x.end());
            m[x].push_back(st);
        }
        
        vector<vector<string>> ans;
        for(auto x: m){
            ans.push_back(x.second);
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
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
} 

// Time Complexity  - O(N*|S|*log|S|), where |S| is the length of the strings.
// Auxiliary Space: O(N*|S|), where |S| is the length of the strings.

