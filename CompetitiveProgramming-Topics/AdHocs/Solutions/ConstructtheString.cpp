#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

void test_case(){
    int n,a,b;
    cin>>n>>a>>b;
    int curlength = 0,curindex = 0;
    string ans = "";
    while(curlength < n){
        ans += char('a' + curindex%b);
        curindex++;
        curlength++;
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
