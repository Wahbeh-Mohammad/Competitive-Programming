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

const int N = 1000010;
int n, m, ans;
string island[N];

int dfs(int x, int y){
    if(island[x][y]=='#' || x < 0 || x > n-1 || y < 0 || y > m-1)
        return 0;
    if(x == n-1 && y == m-1)
        return 1;
    if((x>0 && y>0)||(x==0 && y>0)||(y==0 && x>0))
        island[x][y] = '#';
    return dfs(x+1,y) || dfs(x,y+1);
}

int main(){ fastIO;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>island[i];
    }
    ans += dfs(0,0);
    ans += dfs(0,0);
    cout << ans << "\n";
    return 0;
}
