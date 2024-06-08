#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
    vector<int> curr;
    vector<vector<int>> ans;

public:
    vector<vector<int>> CombinationSum2(vector<int>& arr, int k) {
        // Code Here.
        sort(arr.begin(), arr.end()); // preprocessing to avoid going for same combinations
        dfs(arr, 0, k);

        return ans;
    }

private:
    void dfs(vector<int>& arr, int idx, int k) {
        if (k == 0) {
            ans.push_back(curr);
            return;
        }
        if (idx == arr.size() || k < 0)
            return;

        for (int i = idx; i < arr.size(); i++) {
            if (i > idx && arr[i] == arr[i - 1])
                continue; // to avoid going for same combinations

            curr.push_back(arr[i]);

            dfs(arr, i + 1, k - arr[i]);

            curr.pop_back(); // backtrack
        }
    }
};
