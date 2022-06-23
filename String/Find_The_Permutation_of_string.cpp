#include<bits/stdc++.h>
using namespace std;
 
class Solution
{
	public:
	    void permutation(int i,string &s,set<string> &v){
	        if(i == s.size()){
	            v.insert(s);
	            return;
	        }
	        
	        for(int j = i; j < s.size(); j++){
	            swap(s[i],s[j]); // swap the element 
	            permutation(i+1,s,v);
	            swap(s[i],s[j]); // backtracking the swapping
	        }
	    }
		vector<string>find_permutation(string S)
		{ 
		    set <string> v;
		    permutation(0,S,v);
		    vector<string> ans;
		    for(auto x: v){
		        ans.push_back(x);
		    }
		    return ans;
		}
};
 
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
} 

// Time Complexity - O(N!*N) Space Complexity - O(N!)