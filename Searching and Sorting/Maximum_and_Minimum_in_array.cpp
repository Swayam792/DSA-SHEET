 
#include <bits/stdc++.h>
using namespace std;
 
class Solution{
  public:
    int middle(int A, int B, int C){
           if(A<B)
        {
            if(B<C)
            {
                return B;
            }
            else if(A>C)
            {
                return A;
            }
            else
            return C;
        }
        else
        {
            if(B>C)
            {
                return B;
            }
            else if(A<C)
            {
                return A;
            }
            else
            return C;
            
        }
    }
}; 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
} 