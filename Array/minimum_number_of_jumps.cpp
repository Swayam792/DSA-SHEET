#include<bits/stdc++.h>
using namespace std;
 
class Solution{
  public:
    
    int minJumps(int arr[], int n){
        int farthest=0,jumps=0,current=0;
       for(int i=0;i<n-1;i++)
       {
         farthest=max(farthest,i+arr[i]);
         if(i==current)
         {
             jumps++;
             current=farthest;
         }
              
       }
       if(current<n-1)
       return -1;
       return jumps;
    }
};
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

//Time Complexity - O(N) Space Complexity - O(N)