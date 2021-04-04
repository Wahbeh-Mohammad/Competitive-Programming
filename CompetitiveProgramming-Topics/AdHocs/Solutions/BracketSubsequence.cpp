#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define ms0(x) memset(x,0,sizeof x)
#define mp make_pair
#define pb push_back
#define pi 3.14159265358979323846
#define pq priority_queue
typedef long long ll;
using namespace std;

int main(){ fastIO;
    int n,k;
    string s;
    cin>>n>>k;
    cin>>s;
    bool used[n]; ms0(used);
    stack<int>lefties;
    for(int i=0;i<n;i++){
        if(s[i] == '('){
            lefties.push(i);
        } else {
            if(k){
                used[i] = true;
                used[lefties.top()] = true;
                lefties.pop();
                k-=2;
            }
        }
    }
    for(int i=0;i<n;i++)
        if(used[i])
            cout<<s[i];
    return 0;
}
