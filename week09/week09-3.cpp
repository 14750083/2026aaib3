// week09-3.cpp 學習計畫 matrix 第4題
// leetcode 73.Set Matrix Zeroes
// 遇到0, 把橫條 直條, 都改成0
class Solution {
public:
    // 沒有return 要in place 直接改matrix
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> left(m);
        vector<int> up(n);
        // 兩個步驟 1.打勾勾 2.再汙染整條(原來的)
        for (int i = 0; i < m; i++) {     // 左手i對應m
            for (int j = 0; j < n; j++) { // 右手j對應n
                if (matrix[i][j] == 0) {  // 遇0打勾
                    left[i] = 1;          // 打勾
                    up[j] = 1;            // 打勾
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (left[i] == 1 || up[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
