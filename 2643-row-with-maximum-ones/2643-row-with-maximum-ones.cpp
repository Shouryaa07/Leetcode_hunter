class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row = 0, maxOnes = 0;

        for (int i = 0; i < mat.size(); i++) {
            int cnt = 0;
            for (int x : mat[i]) {
                cnt += x;
            }

            if (cnt > maxOnes) {
                maxOnes = cnt;
                row = i;
            }
        }

        return {row, maxOnes};
    }
};