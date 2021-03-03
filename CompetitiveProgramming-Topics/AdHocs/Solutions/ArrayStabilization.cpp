#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

int main(){ fastIO;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    } sort(a,a+n);
    int mx,mn;
    mx = *max_element(a,a+n-1), mn = *min_element(a,a+n-1);
    int ans1 = mx - mn;
    mx = *max_element(a+1,a+n), mn = *min_element(a+1,a+n);
    int ans2 = mx - mn;
    cout << min(ans1,ans2);
    return 0;
}
