#include<bits/stdc++.h> 
using namespace std; 
 
class Solution{   
public:
    int minimumNumberOfSwaps(string S){
         
        int sum = 0,val = 0;
        for(auto x: S){
            if(x == ']'){
                val--;
                // if the value is negetive then we know that the bracket is imbalanced. So, we required to swap but how many swaps. The ans is upto the next [ bracket 
                // Consider the best case when the opening bracket is next to it. then the ans will be 1 i.e -(val). so if there is two consucative brackets then the number of swap required for the first balancing will be 2 and second balancing will be 1 that is the sum of val
                if(val < 0){
                    sum -= val;
                }
            }else{
                val++;
            }
        }
        return sum;
    }
}; 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}    

// Time complexity - O(N) , N - size of the string
// Space Complecity - O(N) ,  N - size of the string