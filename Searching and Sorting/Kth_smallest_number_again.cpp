#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
   ll n,q;
   cin>>n>>q;
   vector<pair<ll,ll>> v(n);
   for(ll i = 0 ; i < n; i++){
	   ll p,q;
	   cin>>p>>q;
      v[i] = {p,q};
   }
   
   sort(v.begin(),v.end());
   ll i = 0, j = 0;
   vector<pair<ll,ll>> newInterval;
   // Merging overlapping intervals;
   while(j < v.size()){
      ll maxi = v[i].first;
      while(j < v.size() and maxi >= v[j].first){
         maxi = max(maxi,v[j].second);
         j++;
      }
      newInterval.push_back({v[i].first,maxi});
      i = j;
   }
 
   n = newInterval.size();
   while(q--){
      ll k;
      cin>>k;
      ll i = 0 ;
      ll ans = -1;
      
         ll p = k ;
         // search for value
      while(i < n and p > 0){
         if(p - (newInterval[i].second - newInterval[i].first + 1) <= 0){
            ans = newInterval[i].first + p - 1;
            break;
         }else{
            p -= (newInterval[i].second - newInterval[i].first + 1);
         }
         i++;
      }             
      
      cout<<ans<<endl;
   }
   
}

int main() {
   ll t;
   cin>>t;
   while(t--)
   {
	   solve();
   }
}
 