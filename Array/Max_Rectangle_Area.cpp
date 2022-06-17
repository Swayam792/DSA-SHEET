#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
 
class Solution{
  public:
    int maxArea(int arr[],int n){
        
        vector<int> left(n,0);
        vector<int> right(n,0);
        stack<int> s;
      
        for(int i=0;i<n;i++){
             while(!s.empty() and arr[s.top()]>=arr[i]){
                 s.pop();
             }
            left[i]=(s.empty())?-1:s.top();
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
    
        for(int i=n-1;i>=0;i--){
              while(!s.empty() and arr[s.top()]>=arr[i]){
                 s.pop();
             }
            right[i]=(s.empty())?n:s.top();
            s.push(i);
        }
        
        int maxi=0,ans;
        for(int i=0;i<n;i++){            
            int cal=arr[i]*(right[i]-left[i]-1);
            if(maxi<cal){
                maxi=cal;
                ans=i;
            }
        }
        //cout<<ans<<endl;
        return maxi;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(M[i][j] == 0){
                    M[i][j] = 0;
                }else{
                    M[i][j] = M[i-1][j] + 1;
                }
            }
        }
        
        int maxi = INT_MIN;
        for(int i = 0; i < n; i++){
            maxi = max(maxi, maxArea(M[i],m));
        }
        return maxi;
    }
};

 
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
} 

// Time Complexity - O(n*m) Auxiliary Space - O(m)