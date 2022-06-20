#include <bits/stdc++.h>
using namespace std;
 
class Solution{
  public:
    int N = 1e6;
    long long merge(long long left,long long mid,long long right,long long arr[]){
        long long n = right-left+1;
        long long temp[n];
        long long count = 0;
        long long i = left, j = mid+1, k = 0;
        while(i <= mid and j <=right){
            if(arr[i] <= arr[j]){
                temp[k++] = arr[i++];
            }else{
                temp[k++] = arr[j++];count+=mid-i+1;
            }
        }
        while(i <= mid){
            temp[k++] = arr[i++];
        }
        while(j <= right){
            temp[k++] = arr[j++];
        }
        k = 0;
        for(int p = left; p <= right; p++){
            arr[p] = temp[k++];
        }
        return count;
    }
    
    long long mergeSort(long long left, long long right,long long arr[]){
        long long ans = 0;
        if(left < right){
            long long mid = (right + left)/2;
            ans += mergeSort(left, mid, arr);
            ans += mergeSort(mid+1,right, arr);
            ans += merge(left,mid,right,arr);
        }
        return ans;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
       return mergeSort(0,N-1,arr);
    }
}; 

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
} 

// Time Complexity - O(NlogN) Auxiliary space - O(N)