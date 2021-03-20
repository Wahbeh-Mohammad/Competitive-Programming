#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
/*

time limit per test: 1 second
memory limit per test: 256 megabytes
input: standard input
output: standard output

The Night King wants his people to get closer and know each other better. He realizes that people of villages that
are connected together know each other better than the villages that are not connected at all, so he decided to construct 
some roads to make all the villages connected to all other. Help him to find the minimum number of new 
roads he has to construct so no village will be left alone.

Input
The first line consists of 2 integers n and m (1 ≤ n, m ≤ 105), 
which represent the number of villages and the number of roads between them, respectively.
Each of the next m lines contains two integers a and b (1 ≤ a, b ≤ n, a ≠ b). 
Each line means that there is a direct road between village a and b.
There might be several roads between the same pair of villages.

Output
Print a single integer which is the answer of the problem.

Example
input
4 3
1 2
2 3
3 2
output
1
*/
typedef long long ll;
using namespace std;

const int N = 1e5 + 10;
int n,m,ans=-1,f,t;
bool vis[N];
vector<int> adj[N];

void dfs(int node){
    if(vis[node])
        return;

    vis[node] = true;
    for(int i=0;i<adj[node].size();i++){
        dfs(adj[node][i]);
    }
}

int main(){ fastIO;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>f>>t;
        adj[f].pb(t);
        adj[t].pb(f);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
