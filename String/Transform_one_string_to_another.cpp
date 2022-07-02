#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    
    public:
    int transfigure (string A, string B)
    { 
    	unordered_map<char,int> m,mp;
    	for(auto x:A){
    	    m[x]++;
    	}
    	for(auto x:B){
    	    mp[x]++;
    	}
    	// check if all the character of string A present in B or not 
    	for(int i=0;i<A.size();i++){
    	    if(m[A[i]]!=mp[A[i]]){
    	        return -1;
    	    }
    	}
     int i=A.length();
    int j=B.length();
    int count=0;
    // Now iterate from the last of both the string bcz as in question given we should pick a character and put infront of string, so we observe that the number of character missing while iterating simultaniously in both the array is our answer
    while(i>=0 && j>=0)
    {
        if(A[i]!=B[j])
        {
            i--;
            count++;
        }
        else
        {
            i--;
            j--;
        }
    }
    return count;
        
    }
}; 

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution obj;
        cout << obj.transfigure (A, B) << endl;
    }
}  

//Time Complexity - O(N) - N - size of string
// Auxiliary Space - O(2*n) - n - size of map