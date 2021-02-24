#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;
 
bool solve(ll n){
    for(ll a=1;a * a * a <= n;a++){
        ll b = cbrt(n - (a*a*a));
        if(b <= 0)continue;
 
        if( ((b*b*b)+(a*a*a)) == n ){
            return true;
        }
    }
    return false;
}
 
 
int main(){ fastIO;
    ll t;  cin>>t;
    while(t--){
        ll n;cin>>n;
        if(n==1){cout<<"NO\n";continue;}
        cout << (solve(n) ? "YES\n" : "NO\n");
    }
    return 0;
}
