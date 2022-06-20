#include <bits/stdc++.h>
using namespace std;
 
class Solution
{
    public:    
    
    vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
    {
        int i = 0, j = 0, k = 0;
        vector<int> ans;
        while(i < n1 and j < n2 and k < n3){
            int a = A[i], b = B[j], c = C[k];
            if(!ans.empty() and a == ans.back()){
                i++; // Handling duplicate
            }else if(a == b and b == c){
                ans.push_back(a); // Found common element
                i++,j++,k++;
            }else if(a <= b and a<=c){
                i++; // if A[] element is less than or equal to others
            }else if(b <= a and b <= c){
                j++; // if B[] element is less than or equal to others
            }else{
                k++; // if C[] element is less than or equal to others
            }
        }
        return ans;
    }

};
 
int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
} 

// Time Complexity - O(N1+N2+N3) Auxiliary Sapce - O(1)