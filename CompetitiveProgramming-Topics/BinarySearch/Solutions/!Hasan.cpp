#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

int main(){ fastIO;
    int n,x,y;
    cin>>n>>x>>y;
    ll mid, l = 0, r = 1e18,ans = 1e18;
    while(l<=r){
        mid = l + (r-l)/2;
        if((mid/x + mid/y) >= n){
            ans = min(ans,mid);
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
