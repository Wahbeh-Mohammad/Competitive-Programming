# DFS ( Depth first search )
```
void dfs(int node){
  vis[node] = 1;
  for (int i = 0; i < g[node].size(); i++)
    if (!vis[g[node][i]])
      dfs(g[node][i]);
}
```
# BFS ( Breadth first search )
```
while(!q.empty()){ // this is not the base implementation but its easy to delete the extras
    pair<int,int> cur = q.front();
    q.pop();
    if(!vis[cur.first]){
        vis[cur.first] = true;
        if((cur.first * 2 == b) || (cur.first - 1 == b)){
            cout << cur.second + 1;
            return;
        }
        if((2 * cur.first) < 2*b)
            q.push({cur.first * 2, cur.second + 1});
        if((cur.first - 1) > 0)
            q.push({cur.first - 1, cur.second + 1});
    }
}

```
