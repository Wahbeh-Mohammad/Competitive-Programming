#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
typedef long long ll;
using namespace std;

const int N = 1005;
int n,ans = 1;
int ar[N];

int check(int x){
    int ele = ar[x];
    int dist = 1;
    int index = x + 1;
    while(ar[index] <= ele && index < n){
        ele = ar[index];
        index++;
        dist++;
    }
    index = x-1; ele = ar[x];
    while(ar[index] <= ele && index >= 0){
        ele = ar[index];
        index--;
        dist++;
    }
    return dist;
}

int main(){ fastIO;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];

    for(int i=0;i<n;i++){
        int cur = check(i);
        ans = max(ans,cur);
    }
    cout << ans ;
    return 0;
}
