#include<bits/stdc++.h>
 
using namespace std; 

bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
} 


bool findPair(int arr[], int size, int n){
    
    sort(arr,arr+size);
    int i = 0, j = 1;
    while(j < size){
        if(arr[j] - arr[i] == n){
            return 1;
        }
        if(arr[j] - arr[i] > n){
            while(i < j and arr[j] - arr[i] > n){
                i++;
            }
            if(i != j and arr[j] - arr[i] == n){
                return 1;
            }
        }
        j++;
    }
    return 0;
}