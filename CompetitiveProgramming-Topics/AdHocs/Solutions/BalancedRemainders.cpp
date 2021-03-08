#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

void test_case(){
    int n,z,t;
    cin>>n;
    z = n/3;
    int a[n],mods[3];
    memset(mods,0,sizeof mods);
    for(int i=0;i<n;i++){
        cin>>a[i];
        mods[a[i]%3]++;
    }
    int ans = 0;
    int c0 = mods[0], c1 = mods[1], c2 = mods[2];
    if(c0 > z){
        t =  c0 - z; c0 -= t; c1 += t; ans += t;
        if(c1 > z){
            t = c1 - z; c1 -= t; c2 += t; ans += t;
        }
    }
    if(c1 > z){
        t = c1 - z; c1 -= t;c2 += t; ans += t;
        if(c2 > z){
            t = c2 - z; c2 -= t;c1 += t; ans += t;
        }
    }
    if(c2 > z){
        t = c2 - z; c2 -= t; c0 += t; ans += t;
        if(c0 > z){
            t = c0 - z; c0 -= t; c1 += t; ans += t;
        }
    }
    cout << ans << "\n";
}

int main(){ fastIO;
    int t;
    cin>>t;
    while(t--)
        test_case();
    return 0;
}
