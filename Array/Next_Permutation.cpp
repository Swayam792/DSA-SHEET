#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int> &arr)
    {
        int index = INT_MAX, n = arr.size();
        // Find the first smallest number index from the right 
        for(int i = n - 2; i >= 0; i--){
            if(arr[i] < arr[i+1]){
                index = i;
                break;
            }
        }
        
        if(index == INT_MAX){
            // All ready in decresing order so reverse to get 1st permutation
            reverse(arr.begin(),arr.end());            
        }else{
            int highIndex;
            // Find the first largest number index from the right
            for(int i = n - 1; i >= 0; i--){
                if(arr[index] < arr[i]){
                    highIndex = i;
                    break;
                }
            }
            
            // Swapping the index and the highIndex
            swap(arr[index], arr[highIndex]);
            reverse(arr.begin()+index+1,arr.end());
        }
    }     
};

// Time Complextiy - O(N) Space Complexity - O(1)