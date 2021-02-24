#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

const ll N = 1e5 + 10;
ll ans,n,k,a[N],b[N];

bool check(ll x){
    ll cur = k;
    for(int i=0;i<n;i++){
        ll needed = x * a[i];
        if(needed > b[i])
            cur -= needed - b[i];

        if(cur < 0)
        return false;
    }
    return true;
}

int main(){ fastIO;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll l=0,r=2e9;
    while(l<=r){
        ll mid = l + (r-l)/2;
        if(check(mid)){
            ans = max(ans,mid);
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout<<ans;
    return 0;
}
