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

int main(){ fastIO;
    int n; cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++)cin>>a[i];
    int l=1,r=1,ans = 0;
    while(r<=n){
        if(a[r+1] >= a[r]){
            r++;
        } else {
            ans = max(ans,r-l+1);
            l = r+1;
            r++;
        }
    }
    ans = max(ans,r-l);
    cout << ans << "\n";
    return 0;
}
