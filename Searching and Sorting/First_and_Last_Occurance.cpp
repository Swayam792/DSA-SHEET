#include<bits/stdc++.h>
using namespace std;
 
vector<int> find(int arr[], int n , int x )
{ 
    int ind1 = -1, ind2=-1;
    for(int i = 0 ; i < n; i++){
        if(arr[i] == x){
            if(ind1 == -1){
                ind1 = i;
                ind2 = i;
            }else{
                ind2 = i;
            }
        }
    }
    return {ind1,ind2};
} 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
} 

// Time Complexity - O(N)
// Space complexity - O(1)