 
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    } 
      return 0;
} 


int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  vector<int> v;
  for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
          v.push_back(mat[i][j]);
      }
  }
  sort(v.begin(),v.end());
  return v[k-1];
}

// This is not optimise code , I will optimise it later

// Time Complexity((n*n)log(n*n)) Auxiliary Space - O(n*n) 
