#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define ms1(x) memset(x,1,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
#define MOD (ll)(1e9 + 7)
#define ff first
#define ss second
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    int n; cin >> n;
    int a[n + 5];
    map<int, pair<int, int> > indices;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        indices[a[i]] = { i , n-i+1 };
        // cout << a[i] << " " << i << " " << n-i+1 << "\n";
    }
    int m,x; cin>>m;
    ll ans1 =0 , ans2=0;
    for(int i=0;i<m;i++){
        cin>>x;
        ans1 += indices[x].ff;
        ans2 += indices[x].ss;
    }
    cout << ans1 << " " << ans2 << "\n";
}

int main(){ fastIO;
    int TEST_CASES = 1;
    // cin>>TEST_CASES;
    while(TEST_CASES--) solve();
    return 0;
}
