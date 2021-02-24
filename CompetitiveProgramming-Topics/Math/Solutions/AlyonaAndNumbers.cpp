#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

int main(){ fastIO;
    ll n,m;
    cin>>n>>m;
    ll a[5] = {0},b[5] = {0};
    for(int i=1;i<=n;i++)
        a[i%5]++;
    for(int i=1;i<=m;i++)
        b[i%5]++;

    ll ans = a[0] * b[0] + a[1] * b[4] + a[2] * b[3] + a[4] * b[1] + a[3] * b[2];
    cout<<ans;

    return 0;
}
