 
#include <bits/stdc++.h>
using namespace std;
 
class Solution
{
public:
    int solve(int i,string A,vector<string> &B){
        if(i == A.size()){
            return true;
        }
        
        bool f = false;
        // Search all the element of the B array to find if the given A can be build by that element
        for(int j = 0; j < B.size(); j++){
            if(B[j][0] == A[i] and i + B[j].size() <= A.size()){
                int size = B[j].size();
                string str = A.substr(i,size);
                // if the string in B is a substring of a the we can proceed with it 
                if(str == B[j]){
                    f = solve(i+size,A,B);
                    if(f){
                        return true;
                    }
                }
            }
        }
        return f;
    }
    int wordBreak(string A, vector<string> &B) {        
        return solve(0,A,B);
    }
};
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        Solution ob;
        cout<<ob.wordBreak(line, dict)<<"\n";
    }
} 

// Time Complexity - O(N*M) N - size of array B and M - size of array A
// Auxiliary space - O(1) + recursive stack space