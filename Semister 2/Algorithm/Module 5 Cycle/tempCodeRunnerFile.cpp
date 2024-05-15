
    path[parent] = true;

    for (int child : adj[parent])
    {
        if (path[child])
        {
            ans = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    // path[pa