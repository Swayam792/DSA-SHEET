#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}
 

int countRev (string s)
{ 
    int n = s.size();
    if(s.size()%2){
        return -1;
    }
    int open = 0, close = 0;
    for(int i = 0; i < n;i++){
        if(s[i] == '{'){
            open++;
        }else{
            // if there is no open bracket then we have to make the closed bracket open, so the open bracket count increased andd we have to track the closing bracket also bcz we perform one operation to make it open 
            if(open == 0){
                open++;
                close++;
            }else{
                // if the corresponding closing bracket found then then decrease the open bracket count
                open--;
            }
        }
    }
    
    return close + open/2;
}

// Time Complexity - O(N) N - length of string 
// Auxiliary space - O(1)