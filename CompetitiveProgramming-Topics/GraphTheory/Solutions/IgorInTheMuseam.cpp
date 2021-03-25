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

const int N = 1005;
int x,y,n,m,k,cnt,Q;
char grid[N][N];
int vis[N][N];
int ans[1000010];
int dx[4] = {1,-1,0, 0};
int dy[4] = {0, 0,1,-1};

void dfs(int x,int y,int q){
    if(grid[x][y]=='*' || vis[x][y] || x < 1 || x > n || y < 1 || y > m)
        return;
    vis[x][y] = q;
    for(int i=0;i<4;i++)
        if(grid[ (x+dx[i]) ][ (y+dy[i]) ] == '*')
            cnt++;

    for(int i=0;i<4;i++){
        dfs(x+dx[i],y+dy[i],q);
    }
}

int main(){ fastIO;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
        }
    }
    while(k--){
        Q++;
        cin>>x>>y;
        cnt = 0;
        if(ans[vis[x][y]] != 0)
            cout << ans[vis[x][y]] <<"\n";
        else{
            dfs(x,y,Q);
            ans[Q] = cnt;
            cout << cnt << "\n";
        }
    }
    return 0;
}
