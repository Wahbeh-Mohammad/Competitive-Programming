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

const int N = 1e6 + 5;
bool prime[N];

void seive(){ ms1(prime);
    for(int i=2;i<=N;i++){
        if(prime[i]){
            for(int j = i+i; j<=N; j+=i){
                prime[j] = false;
            }
        }
    }
    prime[1] = false;
}

void solve () {
    ll n,x,z;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x; z = sqrt(x);
        if(prime[z] && z!=1 && z*z == x)cout << "YES\n";
        else cout << "NO\n";
    }
}

int main(){ fastIO
    seive();
    int T = 1;
    // cin >> T;
    while (T--) solve();
    return 0;
}
