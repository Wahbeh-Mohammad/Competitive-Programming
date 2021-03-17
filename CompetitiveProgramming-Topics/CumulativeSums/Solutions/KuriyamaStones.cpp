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

const ll N = 1e5 + 10;
ll n,m,a[N],cs1[N],cs2[N],x,l,r;

int main(){ fastIO;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        cs1[i] = cs1[i-1] + a[i];
    }
    sort(a,a+n+1);
    for(int i=1;i<=n;i++){
        cs2[i] = cs2[i-1] + a[i];
    }
    cin>>m;
    while(m--){
        cin>>x>>l>>r;
        if(x==1){
            cout << cs1[r] - cs1[l-1] << "\n";
        } else {
            cout << cs2[r] - cs2[l-1] << "\n";
        }
    }
    return 0;
}
