 
#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256
 
class Solution
{
    public: 
    bool areIsomorphic(string str1, string str2)
    { 
        if(str1.size() != str2.size()){
            return 0;
        }
        unordered_map<char,char> m1,m2;
        for(int i = 0; i < str1.size();i++){
            if(m1.find(str1[i]) == m1.end() and m2.find(str2[i]) == m2.end()){
                m1[str1[i]] = str2[i];
                m2[str2[i]] = str1[i];
            }else{
                if(m1[str1[i]] != str2[i]){
                    return 0;
                }
                if(m2[str2[i]] != str1[i]){
                    return 0;
                }
            }
        }
        return 1;
    }
};
 
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  

// Time Complexity - O(N) - N - size of the string
//  Auxiliary Space: O(Number of different characters)