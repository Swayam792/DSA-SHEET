#include<bits/stdc++.h>

using namespace std;
 
class Solution{
 
    int solve(int arr[],int n){
        int right[n],left[n];
        right[n-1]=arr[n-1];
        left[0] = arr[0];
        // Calculate the right maximum
        for(int i=n-2;i>=0;i-- ){
            if(arr[i]<=right[i+1]){
                right[i]=right[i+1];
            }else{
                right[i]=arr[i];
            }
        }
        
        // Calculate the left maximum
        for(int i=1;i<n;i++){
            if(arr[i] <= left[i-1]){
                left[i] = left[i-1];
            }else{
                left[i] = arr[i];
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum += min(left[i],right[i]) - arr[i]; //  calculate the amount of water stored in that particular index
        }
        return sum;
    }
    public:
    int trappingWater(int arr[], int n){
       
        int ans=solve(arr,n);
        return ans;
    }
};
 
int main(){
    
    int t;
   
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
       
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  


// Time Complexity - O(N)