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

void solve(){
    ll n,h,d; cin>>n>>d>>h;
    if(n==2 && h==1 && d == 1) cout << "1 2";
    else if(n>= 3 && d > h*2 || n>=3 && d==1) cout << -1;
    else {
        ll curnode = 1, nextnode = 2;
        if(d <= h){
            while(h){
                cout << curnode << " " << nextnode << "\n";
                curnode++;nextnode++;h--;
            } d = 0; curnode--;
            while(nextnode <= n){
                cout << curnode << " " << nextnode << "\n";
                nextnode++;
            }
        } else {
            if(d == h-1) {cout << -1;return;}
            ll temp = h;
            while(h){
                cout << curnode << " " << nextnode << "\n";
                curnode++;nextnode++;h--;
            } d = d-temp;
            curnode = 1;
            while(d){
                cout << curnode << " " << nextnode << "\n";
                d--;
                curnode = nextnode;
                nextnode++;
            }
            while(nextnode <= n){
                cout << 1 << " " << nextnode << "\n";
                nextnode++;
            }
        }
    }
}

int main(){ fastIO;
    int t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}
