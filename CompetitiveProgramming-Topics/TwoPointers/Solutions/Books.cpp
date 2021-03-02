#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

int main(){ fastIO;
    ll n,t;
    cin>>n>>t;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll l=0,r=0,cur=0,ans = 0;
    while(l<n){
        if(cur + a[r] <= t){
            cur += a[r];
            r++;
        } else {
            ans = max(ans,r-l);
            cur -= a[l];
            l++;
        }
    }
    cout << ans << "\n";
    return 0;
}
