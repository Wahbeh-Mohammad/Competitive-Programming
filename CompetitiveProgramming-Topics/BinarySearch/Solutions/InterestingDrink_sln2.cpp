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
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(all(a));
    cin>>m;
    while(m--){
        ll x;
        cin>>x;
        vector<ll>::iterator Upper;
        Upper = upper_bound(all(a),x);
        cout << Upper - a.begin() << "\n";
    }
    return 0;
}
