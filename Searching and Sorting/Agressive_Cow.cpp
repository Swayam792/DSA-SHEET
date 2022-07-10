#include<bits/stdc++.h>
using namespace std;

#define ll long long
 

void solve(){
    ll n,c;
    cin>>n>>c;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    ll l = 1, r = v[n-1];
    ll ans = -1;
    while(l <= r){
        ll mid = (l+r)/2;
        ll cow = 1;
        ll prev = v[0];
        for(ll i = 1; i < n; i++){
            if(v[i] - prev >= mid){
                cow++;
                prev = v[i];
                if(c == cow){
                    break;
                }
            }
        }
        if(c == cow){
            ans = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }
    cout<<ans<<endl;
}

int main(){ 
    ll t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}

// Time Complexity - O((N)log(max(arr)))
// Space Complexity - O(1)