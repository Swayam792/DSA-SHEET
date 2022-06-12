 
#include<bits/stdc++.h>
using namespace std; 

int maxProfit(vector<int>&arr){
    
    int firstbuy = INT_MIN, secondbuy = INT_MIN;int  firstsell =0 , secondsell = 0;
    for(int i = 0; i < arr.size() ;i++){
        firstbuy = max(firstbuy, - arr[i]);
        firstsell = max(firstsell, firstbuy + arr[i]);
        secondbuy = max(secondbuy,firstsell - arr[i]);
        secondsell = max(secondsell, arr[i] + secondbuy);
    }
    return secondsell;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

} 

// Time complexity - O(N)