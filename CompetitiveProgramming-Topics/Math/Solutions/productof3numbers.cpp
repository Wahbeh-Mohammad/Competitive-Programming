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
typedef long double ld;
using namespace std;

void solve () {
    ll n,t ; cin>>n;t = n;
    ll ans[2];
    for(int i=2;i*i<=n;i++)
        if(n%i==0) {ans[0] = i;break;}
    // cout << ans[0] << "\n";
    n/=ans[0];
    for(int i=2;i*i<=n;i++)
        if(n%i==0 && i!=ans[0] && (n/i != i && n/i != ans[0])){
            ans[1] = i; break;
        }
    // cout << ans[1] << "\n";
    n/=ans[1];
    if(ans[0]*ans[1]*n == t && ans[0]!=ans[1] && ans[1]!=n && n!=ans[0])
        cout << "YES\n" << ans[0] << " " << ans[1] << " " << n << "\n";
    else
        cout << "NO\n";
}

int main(){ fastIO
    int T = 1;
    cin >> T;
    while(T--) solve();
    return 0;
}
