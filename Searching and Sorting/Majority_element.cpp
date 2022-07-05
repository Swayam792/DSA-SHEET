 
#include<bits/stdc++.h>
using namespace std;
 
class Solution{
  public: 
    int majorityElement(int a[], int size)
    { 
        int ansIndex = 0, count = 1;
        // first we select the candidate for majority element
        for(int i = 0; i < size; i++){
            if(a[i] == a[ansIndex]){
                count++;
            }else{
                count--;
            }
            
            if(count == 0){
                ansIndex = i;
                count = 1;
            }
        }
        
        if(count <= 0){
            return -1;
        }else{
            // check whether the selected candidate is our ans
            count = 0;
            for(int i = 0;i < size; i++){
                if(a[i] == a[ansIndex]){
                    count++;
                }
            }
            
            if(count > size/2){
                return a[ansIndex];
            }else{
                return -1;
            }
        }
        
    }
}; 
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
} 

// Time Complexity - O(N)
// Auxiliary Space - O(1)