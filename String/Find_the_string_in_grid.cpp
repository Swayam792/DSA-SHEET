#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    
   int m;
   int n;
   bool solve(vector<vector<char>>&grid, string &word, int i, int j, int di, int dj, int l)
   {
       if(i<0 || j<0 || i>m-1 || j>n-1 || grid[i][j] != word[l])
       {
           return false;
       }
       if(l == word.size()-1)return true;
       return solve(grid, word, i+di, j+dj,di, dj, l+1);
   }
vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
    
    vector<vector<int>>ans;
    m = grid.size();
    n = grid[0].size();
    int di[]= {-1, -1, -1, 0, 0, 1, 1, 1};
    int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    for(int i = 0; i<m; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(grid[i][j] == word[0])
            {
                for(int k = 0; k<8; k++)
                {
                    if(solve(grid, word, i, j,di[k], dj[k], 0))
                    {
                        ans.push_back({i, j});
                        break;
                    }
                }
            }
        }
    }
    return ans;
}


}; 
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
	}
	return 0;
}  

// Time Complexity: O(n*m*k) where k is constant
// Space Complexity: O(1) + stack space