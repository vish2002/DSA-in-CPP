int recur(int idx, int n, int w, vector<int> &cost, vector<vector<int>> &dp)
{
    if (w == 0)
    {
        return 0;
    }
    if (idx >= n || w < 0)
    {
        return 1e9;
    }
    if (dp[idx][w] != -1)
        return dp[idx][w];

    int notake = recur(idx + 1, n, w, cost, dp);

    int take = 1e9;
    if (cost[idx] != -1 && w >= idx + 1)
    {
        take = cost[idx] + recur(idx, n, w - (idx + 1), cost, dp);
    }

    return dp[idx][w] = min(take, notake);
}

int minimumCost(int n, int w, vector<int> &cost)
{

    vector<vector<int>> dp(n + 1, vector<int>(w + 1, -1));
    int result = recur(0, n, w, cost, dp);

    return result >= 1e9 ? -1 : result;
}