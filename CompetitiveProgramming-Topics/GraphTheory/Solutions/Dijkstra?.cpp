#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define ms1(x) memset(x,1,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846\
#define MOD (ll)(1e9 + 7)
#define ff first
#define ss second
typedef long long ll;
typedef long double ld;
using namespace std;
struct edge {
    int node;
    ll cost;
    edge(int n, ll c){ node = n; cost = c; }
    bool operator <(const edge &other) const {
        return cost > other.cost;
    }
};

const ll N = 100100;
ll n,m,k,f,t,c,x,y;
vector<ll> ans;
ll dist[N];
bool vis[N];
vector<pair<ll,ll> >graph[N];
priority_queue<edge> q;
ll from[N];

void traverseBack(){
    ll cur = n;
    ans.pb(cur);
    while(from[cur] != -1){
        ans.pb(from[cur]);
        cur = from[cur];
    }
}

void dijkstra(){
    q.push(edge(1,0));
    for(int i=0;i<N;i++) dist[i] = 1e18;
    from[1] = -1;
    dist[1] = 0;
    while(!q.empty()){
        edge t = q.top();
        q.pop();
        if(vis[t.node]) continue;
        vis[t.node] = true;
        for(int i=0;i<graph[t.node].size();i++){
            ll newNode = graph[t.node][i].ff;
            ll  newCost = graph[t.node][i].ss;
            if(newCost + t.cost < dist[newNode]){
                dist[newNode] = newCost + t.cost;
                q.push( edge(newNode, dist[newNode]) );
                from[newNode] = t.node;
            }
        }
    }
}

void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>f>>t>>c;
        graph[f].pb({t, c});
        graph[t].pb({f, c});
    }
    dijkstra();
    if(!vis[n]){
        cout << -1;
    } else {
        traverseBack();
        reverse(all(ans));
        for(int i=0;i<ans.size();i++){
            cout << ans[i] << " ";
        }
    }
}

int main(){ fastIO;
    int TEST_CASES = 1;
    // cin>>TEST_CASES;
    while(TEST_CASES--) solve();
    return 0;
}
