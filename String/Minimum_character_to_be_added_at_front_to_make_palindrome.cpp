 
#include<bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    
   int minChar(string str){
       int s = 0 , n = str.length() ;
       int c = 0 , l = n - 1 ; 
       while( s < l ){
          // if the sth and lth character doesn't match then we have to delete the all the element between s and l
           if( str[s] != str[l] ){
               if( s == 0 )
                   l-- ; 
               else 
                   s = 0 ;
               c = 0 ; 
           }
           else {
               s++ ; 
               l-- ; 
               c += 2 ;
           }
       }
       if( s == l )
           c++ ;
       return n - c ; 
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
	    int ans = ob.minChar(str);
	    cout << ans<<endl;
	}
	return 0;
} 

// Time Complexity - O(N) N- size of the array
// Space Complexity - O(1)