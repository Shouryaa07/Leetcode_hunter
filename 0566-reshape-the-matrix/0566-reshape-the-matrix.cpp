class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        int rows = mat.size();
        int cols = mat[0].size();
        if (rows * cols != r * c) {
            return mat;
        }

        vector<vector<int>> answer(r, vector<int>(c));

        for (int i = 0; i < rows * cols; i++) {
            answer[i / c][i % c] = mat[i / cols][i % cols];
        }

        return answer;
    }
};