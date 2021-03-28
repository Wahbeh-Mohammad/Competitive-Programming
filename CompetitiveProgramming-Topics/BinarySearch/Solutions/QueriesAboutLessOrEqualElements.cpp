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
    int n,m,x;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    for(int i=0;i<m;i++){
        cin>>x;
        int mid, l = 0, r = n-1, ans = 0;
        while(l<=r){
            mid = l + (r-l)/2;
            if(a[mid] > x){
                r = mid - 1;
            } else {
                ans = mid + 1;
                l = mid + 1;
            }
        }
        cout << ans << " ";
    }
    return 0;
}
