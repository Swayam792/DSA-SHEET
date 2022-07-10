#include<bits/stdc++.h>
using namespace std;

class Solution{
 public:
    // int kthElement(int arr1[], int arr2[], int n, int m, int k)
    // {
    //     priority_queue<int> pq;
    //     for(int i = 0; i < n; i++){
    //         pq.push(arr1[i]);
    //         if(pq.size() > k){
    //             pq.pop();
    //         }
    //     }
        
    //     for(int i = 0; i < m; i++){
    //         pq.push(arr2[i]);
    //         if(pq.size() > k){
    //             pq.pop();
    //         }
    //     }
    //     return pq.top();
    // }

    // Time Complexity - O(K log(N+M))
    // Space Complexity - O(K)
    
    int findElement(int *arr1,int *arr2,int *end1,int *end2,int k){
        if(arr1 == end1){
            return arr2[k];
        }
        
        if(arr2 == end2){
            return arr1[k];
        }
        
       
        int mid1 = (end1 - arr1) / 2;
        int mid2 = (end2 - arr2) / 2;
        if (mid1 + mid2 < k)
        {
            if (arr1[mid1] > arr2[mid2])
                return findElement(arr1, arr2 + mid2 + 1, end1, end2,
                    k - mid2 - 1);
            else
                return findElement(arr1 + mid1 + 1, arr2, end1, end2,
                    k - mid1 - 1);
        }
        else
        {
            if (arr1[mid1] > arr2[mid2])
                return findElement(arr1, arr2, arr1 + mid1, end2, k);
            else
                return findElement(arr1, arr2, end1, arr2 + mid2, k);
        }
    }
    
     int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        return findElement(arr1,arr2,arr1+n,arr2+m,k-1);
    }

    // Time Complexity - O(log(n) + log(m))
    // Space Complexity - O(log(n) + log(m))
};