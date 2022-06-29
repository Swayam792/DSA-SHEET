#include<bits/stdc++.h>
using namespace std;
 
class Solution
{
  public:
  
    string secFrequent (string arr[], int n)
    { 
        unordered_map<string,int> m;
        int firstMax = -1;
        for(int i = 0; i < n; i++){
            m[arr[i]]++;
            // first we need to find the first maxima
            firstMax = max(firstMax, m[arr[i]]); 
        }
        
        int secondMax = -1;
        string ans ;
        for(auto x: m){
            // if the element is less than the first maxima and less than the second maxima then that can be our valid answer
            if(x.second < firstMax){
                if(secondMax < x.second){
                    secondMax = x.second;
                    ans = x.first;
                }
            }
        }
        return ans;
    }
}; 
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
} 

// Time complexity - O(N) - N is the size of array
// Auxiliary Space - O(N) - N is the size of array