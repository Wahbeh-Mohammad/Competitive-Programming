#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define ms1(x) memset(x,1,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
#define pq priority_queue
#define MOD (ll)(1e9 + 7)
#define ff first
#define ss second
typedef long long ll;
using namespace std;

ll a,b;

bool check(ll c) {
    if( c<=a && c<=b && c<=((a+b)/3) )
        return true;
    return false;
}

void solve () {
    // sword : 2 diamonds 1 stick
    // shovel : 1 diamond 2 sicks
    cin>>a>>b;
    if(!a || !b) cout << "0\n";
    else {
        ll l=0,r = 1e9, mid, ans = -1e5;
        while(l<=r) {
            mid = l + (r-l)/2;
            // cout << mid << "\n";
            if(check(mid)){
                ans = max(ans, mid);
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }
}

int main(){ fastIO
    int T = 1;
    cin >> T;
    while(T--) solve();
    return 0;
}
