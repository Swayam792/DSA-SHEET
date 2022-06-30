#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    string s;
    cin>>s;
    int n = s.size();
    unordered_map<char,int> m;
    int maxi = 0;
    // get the maximum frequence of letter amount all the letters so that we get to know that can we rearrange the array or not
    for(auto x: s){
        m[x]++;
        if(maxi < m[x]){
            maxi = m[x];
        }
    }
    // The intuition behind the algorithm is, if the maximum charcter frequency is greter than the remaining character frequency then we can't arrange them because atleast one charcter left which can't make adjecent distinct sequence 
    if(n >= 2*maxi){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }
}

int main() {
	 
	ll t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}

// Time complexity - O(t*N) - N - size of string
// Space complexity - O(N)