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
    int n,m,x;
    cin>>n>>m;
    pq<int> mx,mn;
    for(int i=0;i<m;i++){
        cin>>x;
        mx.push(x);
        mn.push(-x);
    }
    int cur,amx = 0,amn = 0, t = n;
    while(!mx.empty() && t){
        cur = mx.top();
        amx += cur;
        cur--;
        mx.pop();
        if(cur > 0)
            mx.push(cur);
        t--;
    } t= n;
    while(!mn.empty() && t){
        cur = mn.top();
        amn += abs(cur);
        cur++;
        mn.pop();
        if(cur < 0)
            mn.push(cur);
        t--;
    }
    cout << amx << " " << amn << "\n";
    return 0;
}
