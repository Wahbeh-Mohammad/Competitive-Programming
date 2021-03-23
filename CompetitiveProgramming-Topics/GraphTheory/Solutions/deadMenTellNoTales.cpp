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

int n,m;
vector<int> G[1003];
bool V[1003];
int ans = 0;

void bfs(int root){
    ms0(V);
    queue<pair<int,int> > q;
    q.push(make_pair(root,0));
    V[root] = 1;
    while(q.size()){
       int node = q.front().first;
       int depth = q.front().second;
       ans+=depth;
       q.pop();
       for(int i=0;i<G[node].size();i++){
           if(!V[G[node][i]]){
               V[G[node][i]] = 1;
               q.push(make_pair(G[node][i],depth+1));
           }
       }
    }
}

int main(){ fastIO;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        bfs(i);
    }
    cout << ans/2;
    return 0;
}
