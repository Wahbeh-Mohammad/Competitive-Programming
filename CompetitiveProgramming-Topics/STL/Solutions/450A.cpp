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

void solve () {
    int n, m, temp; cin>>n>>m;
    queue<pair<int,int> > q;
    for(int i=0;i<n;i++) {
        cin>>temp;
        q.push({temp, i+1});
    }
    while(q.size() > 1){
        pair<int,int> frst = q.front();
        q.pop();
        if(frst.ff - m == 0){
            continue;
        } else if(frst.ff > m){
            frst.ff -= m;
            q.push(frst);
        }
    }
    pair<int,int> ans = q.front();
    cout << ans.ss;
}

int main(){ fastIO
    int T = 1;
    // cin >> T;
    while(T--) solve();
    return 0;
}
