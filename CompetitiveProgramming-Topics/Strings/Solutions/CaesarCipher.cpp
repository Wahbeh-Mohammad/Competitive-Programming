#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define ms1(x) memset(x,1,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
#define pq priority_queue
#define MOD (ll)(1e9 + 7)
#define ff first
#define ss second
typedef long long ll;
typedef long double ld;
using namespace std;

void solve(){
    string a,b;int n;
    cin>>a>>b;n = a.length();
    int firstdif = 0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            firstdif = i; break;
        }
    }
    int dif = (int)(a[firstdif]-b[firstdif])%(int)('z'-'a');
    for(int i=0;i<n;i++){
        if((int)(a[i]-b[i])%(int)('z'-'a') !=  dif){
            cout << "No"; return;
        }
    }
    cout << "Yes";
}

int main(){ fastIO;
    int t = 1;
    // cin>>t;
    while(t--) solve();
    return 0;
}
