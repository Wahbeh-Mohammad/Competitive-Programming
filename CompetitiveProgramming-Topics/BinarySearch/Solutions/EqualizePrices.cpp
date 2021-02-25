#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

int t;
ll n,k,ar[105],mx,mn;

bool check(ll x){
    for(int i=0;i<n;i++)
        if(abs(ar[i] - x) > k)
            return false;
    return true;
}

int main(){ fastIO;
    cin>>t;
    while(t--){
        mx = -1e9; mn = 1e9;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mx = max(mx,ar[i]);
            mn = min(mn,ar[i]);
        }
        ll mid,ans = -1,l=mn + k,r=mx + k;
        while(l<=r){
            mid = l+(r-l)/2;
            if(check(mid)){
                ans = max(ans,mid);
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
