#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

const int N = 1e5 + 10;
int n,k,f,t,ans;
bool vis[N];int cats[N];
vector<int> adj[N];

void dfs(int node,int cat){
    vis[node] = true;
    if(cats[node]) cat++;
    else cat = 0;
    if(cat > k)return;
    for(int i=0;i<adj[node].size();i++){
        if(!vis[adj[node][i]])
                dfs(adj[node][i],cat);
    }
    if(adj[node].size() == 1 && node!=1)
        ans++;
}

int main(){ fastIO;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>cats[i];

    for(int i=0;i<n-1;i++){
        cin>>f>>t;
        adj[f].pb(t);adj[t].pb(f);
    }
    dfs(1,0);
    cout << ans ;
    return 0;
}
