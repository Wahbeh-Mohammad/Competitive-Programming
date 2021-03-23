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

int n,m,k,sx,sy;
char grid[505][505];
bool V[505][505];

int dx[4] = {1,-1,0, 0};
int dy[4] = {0, 0,1,-1};


void dfs(int x,int y){
    if((x <= n && x >=1)&&(y <= m && y >= 1)&&(!V[x][y])&&(grid[x][y]=='.')){
        V[x][y] = true;
        dfs(x+1,y);
        dfs(x-1,y);
        dfs(x,y+1);
        dfs(x,y-1);
        if(k > 0){
            k--;
            grid[x][y] = 'X';
        }
    } else {
        return;
    }
}

int main(){ fastIO;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='.'){
                sx=i;
                sy=j;
            }
        }
    }
    dfs(sx,sy);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<grid[i][j];
        } cout << "\n";
    }

    return 0;
}
