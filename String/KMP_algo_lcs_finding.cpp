 
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
  public:		
	int lps(string s) {
	  
	    int n = s.size();
	    vector<int> lps(n,0);
	    int len = 0, i = 1;
	    while(i < n){
            // if the len pointer and ith character matched then put the lps value as len + 1 bcz it pointing to the point where a matched found
	        if(s[i] == s[len]){
	            lps[i] = len+1;
	            len++,i++;
	        }else{
                // if len is not zero then len pointing to the point where previous match occured matched
	            if(len != 0){
	                len = lps[len-1];
	            }else{
	                lps[i] = 0;
	                i++;
	            }
	        }
	    }
	   
	    return lps[n-1];
	}
}; 
int main() 
{
   

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   		Solution ob;

   		cout << ob.lps(str) << "\n";
   	}

    return 0;
} 