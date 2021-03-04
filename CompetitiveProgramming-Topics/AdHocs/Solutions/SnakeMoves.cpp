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
    cin>>n;string s;
    cin>>s;
    int x=0,y=0;
    vector<pair<int,int>>Moves;
    map<pair<int,int>,bool> Map;
    Moves.pb({0,0});
    Map[{0,0}] = false;
    for(int i=0;i<n;i++){
        pair<int,int> Cur = Moves[i]; // {x,y}
        if(s[i]=='U')
            Moves.pb({Cur.first,Cur.second+1});
        else if(s[i]=='D')
            Moves.pb({Cur.first,Cur.second-1});
        else if(s[i]=='R')
            Moves.pb({Cur.first+1,Cur.second});
        else if(s[i]=='L')
            Moves.pb({Cur.first-1,Cur.second});
        Map[Moves[i+1]] = false;
    }
    pair<int,int> cur = {0,0};
    Map[cur] = true;
    int l= 0,r =1,ans=-1e9;
    while(r<=n){
        pair<int,int> Next = Moves[r];
        if(!Map[Next]){
            ans = max(ans,r-l);
            Map[Next] = true;
            r++;
        } else {
            Map[cur] = false;
            l++;
            cur = Moves[l];
        }
    }
    cout << ans << "\n";
}

int main(){ fastIO;
    int t;
    t = 1;
    while(t--){
        test_case();
    }
    return 0;
}
