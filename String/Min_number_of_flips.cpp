 #include<bits/stdc++.h>
using namespace std;

int minFlips (string s);
int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;

        cout << minFlips (s) << endl;
    }
} 

int minFlips (string s)
{ 
    int n = s.size();
    string s2 = s;
    int mini1 = 0, mini2 = 0;
    // First we are going to calculate minimum number of flip required if we don't change the first character
    for(int i = 1 ; i < n; i++){
        if(s[i] == s[i-1]){
            mini1++;
            if(s[i] == '0'){
                s[i] = '1';
            }else{
                s[i] = '0';
            }
        }
    }
    
    // After that we calculate the number of flips required if we alternate the first character
    mini2 = 1;
    if(s2[0] == '1'){
        s2[0] = '0';
    }else{
        s2[0] = '1';
    }
    for(int i = 1 ; i < n; i++){
        if(s2[i] == s2[i-1]){
            mini2++;
            if(s2[i] == '0'){
                s2[i] = '1';
            }else{
                s2[i] = '0';
            }
        }
    }
    // return the minimum of them
    return min(mini1,mini2);
}

// Time Complexity - O(N)
// Auxiliary Space - O(N)