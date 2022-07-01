#include<bits/stdc++.h>
using namespace std;
 
class Solution
{
    public: 
    string smallestWindow (string s, string p)
    { 
       unordered_map<char,int> mpp;
       int count=0;
       // first we have to put all the character ina map along with its count so that we can find it in given string easier 
       for(int i=0;i<p.length();i++){
           mpp[p[i]]++;
       }
       // count the number of distinct character in the string
       count=mpp.size();
       int j=0,i=0,start;
       string ans="";
       int len=INT_MAX;
       
       while(j<s.length()){
           // if we find an character which is present in the string p then we just decrease its frequency and if the charcter frequency get zero then we found a character whose frequency is same as frequency in string p the we got a letter and decrease the count
           if(mpp.find(s[j])!=mpp.end()){
               mpp[s[j]]--;
               if(mpp[s[j]]==0){
                   count--;
               }
           }
           
           // we have to find the smallest window
           while(count==0){
               if(len>j-i+1){
                   len=j-i+1;
                   ans=s.substr(i,len);
               }
               if(mpp.find(s[i])!=mpp.end()){
                   mpp[s[i]]++;
                   if(mpp[s[i]]==1)count++;
               }
               i++;
           }
           
           j++;
       }
       return len!=INT_MAX ? ans : "-1" ;
    }
}; 

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}  

// Time Complexity - O(N) N - size of the string
// Space Complexity - O(N) N - length of the string