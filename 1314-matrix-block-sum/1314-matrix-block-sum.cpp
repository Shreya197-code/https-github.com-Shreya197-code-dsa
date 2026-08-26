class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
         
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> answer(m, vector<int>(n, 0));

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                int sum = 0;

                int rowStart = max(0, i - k);
                int rowEnd = min(m - 1, i + k);

                int colStart = max(0, j - k);
                int colEnd = min(n - 1, j + k);

                for(int r = rowStart; r <= rowEnd; r++) {
                    for(int c = colStart; c <= colEnd; c++) {
                        sum += mat[r][c];
                    }
                }

                answer[i][j] = sum;
            }
        }

        return answer;
    }
};