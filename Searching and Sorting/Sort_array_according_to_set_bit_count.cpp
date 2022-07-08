#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int count(int n){
        int c=0;
        while(n){
            if(n&1){
                c++;
            }
            n=n>>1;
        }
        return c;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        map<int,vector<int>> m;
        for(int i=0;i<n;i++){
            m[count(arr[i])].push_back(arr[i]);
        }
        
        auto it=m.rbegin();
        int i=0;
        for(;it!=m.rend();it++){
            for(auto x:it->second){
                arr[i++]=x;
            }
        }
        
    }
};

// Time Complexity - O(N* log(N))
// Space Complexity - O(N)