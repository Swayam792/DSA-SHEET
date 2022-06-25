#include<bits/stdc++.h>
using namespace std;
 
class Solution
{
    public: 
    bool ispar(string x)
    { 
        stack<char> st;
        for(auto par: x){
            if(st.empty()){
                if(par == '(' || par == '{' || par == '['){
                    st.push(par);
                }else{
                    return false;
                }
                continue;
            }
            
            if(par == ')'){
                if(st.top() == '('){
                    st.pop();
                }else{
                    return false;
                }
            }else if(par == ']'){
                if(st.top() == '['){
                    st.pop();
                }else{
                    return false;
                }
            }else if(par == '}'){
                if(st.top() == '{'){
                    st.pop();
                }else{
                    return false;
                }
            }else{
                st.push(par);
            }
        }
         
        return st.empty();
    }

}; 
int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  

// Time Complexity - O(N) Auxiliary Space - O(N)