#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
#define pq priority_queue
#define MOD (ll)(1e6 + 3)
typedef long long ll;
using namespace std;

int main(){ fastIO;
    string s;
    cin>>s;
    int ans = 0, n = s.size();
    stack<int>lefties;
    bool used[n] = {false};
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            lefties.push(i);
        } else {
            if(lefties.size()){
                used[i] = true;
                used[lefties.top()] = true;
                lefties.pop();
            }
        }
    }
    for(int i=0;i<n;i++)
        if(used[i]){
            ans++;
        }
    cout << ans;
    return 0;
}
