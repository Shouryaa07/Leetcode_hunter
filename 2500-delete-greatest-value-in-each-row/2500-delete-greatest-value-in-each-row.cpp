class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto& row : grid) {
            sort(row.begin(), row.end());
        }

        int ans = 0;
        int n = grid[0].size();

        for (int j = n - 1; j >= 0; j--) {
            int maxi = 0;

            for (int i = 0; i < grid.size(); i++) {
                maxi = max(maxi, grid[i][j]);
            }

            ans += maxi;
        }

        return ans;
    }
};