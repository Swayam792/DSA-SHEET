
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
    
    int doUnion(int a[], int n, int b[], int m)  {
         
        int ans = 0;
        int freq[100001] = {0};
        for(int i = 0 ; i < n;i ++){
            freq[a[i]]++;
            if(freq[a[i]] == 1){
                ans++;
            }
        }
        
        for(int i = 0 ; i < m;i ++){
            freq[b[i]]++;
            if(freq[b[i]] == 1){
                ans++;
            }
        }
        
        return ans;
        
    }
};
 
int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  