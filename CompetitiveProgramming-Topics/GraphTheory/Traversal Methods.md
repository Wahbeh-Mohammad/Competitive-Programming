# DFS ( Depth first search )
```
void dfs(){
  vis[u] = 1;
  for (int i = 0; i < g[u].size(); i++)
    if (!vis[g[u][i]])
      dfs(g[u][i]);
}
```
