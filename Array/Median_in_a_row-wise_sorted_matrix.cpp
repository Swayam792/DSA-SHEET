
#include <bits/stdc++.h>
using namespace std;
 
class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here      
        vector<int> v;
        for(int i = 0; i < matrix[0].size(); i++){
            for(int j = 0; j < matrix.size(); j++){
                v.push_back(matrix[j][i]);
            }
        }
        sort(v.begin(),v.end());
        if((r*c)%2){
            return v[(r*c)/2];
        }
        int ans =  v[(r*c)/2 - 1];
        return ans;
    }
};
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  

// Time Complexity - O(r*c) Auxiliary Space - O(r*c)