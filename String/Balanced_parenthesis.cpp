#include<bits/stdc++.h>
using namespace std;
 
class Solution
{
    public: 
    bool ispar(string x)
    { 
        stack<char> st;
        for(auto par: x){
            // if stack is empty then we need to see if there coming character is open or closed. If it is closed the we can't pair with open bracket else we push into the stack
            if(st.empty()){
                if(par == '(' || par == '{' || par == '['){
                    st.push(par);
                }else{
                    return false;
                }
                continue;
            }
            
            //check for the closing bracket if there exist corresponding closing bracket or not, if not the return false , otherwise return true 
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