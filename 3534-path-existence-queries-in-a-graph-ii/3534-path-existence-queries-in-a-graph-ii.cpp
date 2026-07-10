class Solution {
public:
    vector<int> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> sortedNums;
        vector<int> indexMap(n);
        vector<pair<int, int>> sortedNumAndIndexes;

        for (int i = 0; i < n; ++i)
            sortedNumAndIndexes.emplace_back(nums[i], i);

        sort(sortedNumAndIndexes.begin(), sortedNumAndIndexes.end());

        for (int i = 0; i < n; ++i) {
            auto [num, originalIndex] = sortedNumAndIndexes[i];
            sortedNums.push_back(num);
            indexMap[originalIndex] = i;
        }

        int maxLevel = 32 - __builtin_clz(n) + 1;

        vector<vector<int>> jump(n, vector<int>(maxLevel));

        int right = 0;
        for (int i = 0; i < n; i++) {
            while (right + 1 < n &&
                   sortedNums[right + 1] - sortedNums[i] <= maxDiff)
                right++;
            jump[i][0] = right;
        }

        for (int k = 1; k < maxLevel; k++) {
            for (int i = 0; i < n; i++) {
                jump[i][k] = jump[jump[i][k - 1]][k - 1];
            }
        }

        for (auto &q : queries) {
            int u = indexMap[q[0]];
            int v = indexMap[q[1]];

            if (u > v)
                swap(u, v);

            int res = minJumps(jump, u, v, maxLevel - 1);

            ans.push_back(res == INT_MAX ? -1 : res);
        }

        return ans;
    }

private:
    int minJumps(vector<vector<int>>& jump, int start, int end, int level) {

        if (start == end)
            return 0;

        if (jump[start][0] >= end)
            return 1;

        if (jump[start][level] < end)
            return INT_MAX;

        int j = level;

        while (j >= 0 && jump[start][j] >= end)
            j--;

        return (1 << j) + minJumps(jump, jump[start][j], end, j);
    }
};