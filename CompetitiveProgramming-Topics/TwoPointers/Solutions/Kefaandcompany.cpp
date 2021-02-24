#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;
 
int main(){ fastIO;
    ll n,k,ans = -1e9;
    cin>>n>>k;
    vector<pair<ll,ll> > V(n);
    for(int i=0;i<n;i++){
        cin>>V[i].first>>V[i].second;
        ans = max(ans,V[i].second);
    }
    sort(all(V));
    ll l = 0, r = 1,sm = V[0].second;
    while(l<n && r<n){
        if(V[r].first - V[l].first < k){
            sm += V[r].second;
            r++;
        } else {
            sm -= V[l].second;
            l++;
        }
        ans = max(ans,sm);
    }
    cout<<ans;
    return 0;
}
