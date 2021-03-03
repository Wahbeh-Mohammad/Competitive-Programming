#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

void test_case(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int ans = 0, cur = a[n-1];
    for(int i=n-2;i > -1;i--){
        if(a[i] > cur)
            ans++;
        if(a[i] < cur){
            cur = a[i];
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
