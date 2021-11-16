# DFS ( Depth first search )
```
void dfs(int node){
  vis[node] = 1;
  for (int i = 0; i < g[node].size(); i++)
    if (!vis[g[node][i]])
      dfs(g[node][i]);
}
```
