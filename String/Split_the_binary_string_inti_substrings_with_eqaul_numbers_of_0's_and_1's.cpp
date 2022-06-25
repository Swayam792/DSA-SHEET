 
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    int maxSubStr(string s){
      
        int count0 = 0, count1 = 0;
        int c = 0;
        int j = 0;
        while(j < s.size()){
            if(s[j] == '0'){
                count0++;
            }else{
                count1++;
            }
            // If we find equal numbers of 0's and 1's then we increase the count
            if(count0 == count1){
                c++;
            }
            j++;
        }
        // If at the last the number of 0's and 1's are not same then we can say that it can't be possible to break the array
        if(count0 != count1){
            return -1;
        }
        return c;
    }
};

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
} 