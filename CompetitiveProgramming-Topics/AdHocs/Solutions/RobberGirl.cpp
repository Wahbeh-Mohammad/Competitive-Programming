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
    int n;cin>>n;
    int a[n + 10];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<pair<int,int>> A;
    for(int i=2,j;i<=n;i++){
        if(a[i] < a[i-1]){
            j = i;
            while(j > 1 && a[j] < a[j-1]){
                A.pb({j-1,j});
                swap(a[j],a[j-1]);
                j--;
            }
        }
    }
    for(int i=0;i<A.size();i++)
        cout<< A[i].first << " "  << A[i].second << "\n";
    return 0;
}
