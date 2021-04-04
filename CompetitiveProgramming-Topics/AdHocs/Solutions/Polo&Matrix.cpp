#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
#define pq priority_queue
typedef long long ll;
using namespace std;

int main(){ fastIO;
    int n,m,k,ans = 0;
    cin>>n>>m>>k;
    int mt[n][m];int mods[k];
    ms0(mods);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mt[i][j];
            mods[mt[i][j]%k]++;
        }
    }
    int count = 0;
    for(int i=0;i<k;i++){
        if(mods[i])count++;
    }
    count >= 2 ? ans = -1: ans = 0;
    if(ans != -1){
        int index = 0;
        int a[n*m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[index] = mt[i][j];
                index++;
            }
        }
        sort(a, a+(n*m));
        int midpoint = a[(n*m)/2];
        for(int i=0;i<(n*m);i++){
            if(a[i] < midpoint){
                ans += (midpoint-a[i])/k;
            } else if(a[i] > midpoint){
                ans += (a[i]-midpoint)/k;
            }
        }
        cout << ans << "\n";
    } else {
        cout << -1;
    }
    return 0;
}
