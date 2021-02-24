#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

ll n,k;
bool check(ll x){
    ll lines = 0,power = 0;
    while(lines < n){
        lines += (x/pow(k,power));
        if( (x/pow(k,power)==0) && lines < n)
            return false;
        power++;
    }
    return true;
}

int main(){ fastIO;
    cin>>n>>k;
    ll ans = 1e9,mid,l = 0, r = n;
    while(l<=r){
        mid = l + (r-l)/2;
        if(check(mid)){
            ans = min(ans,mid);
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans ;
    return 0;
}
