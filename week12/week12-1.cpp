// week12-1.cpp 每日挑戰 2026-11-26
// Leetcode 3360.Stone Removal Game
// A.B 依序拿石頭 10,9,8,7,6...
// 無法拿石頭 就輸
class Solution {
public:
    bool canAliceWin(int n) {
        // A先拿10 B再拿9 A再拿8 B再拿7
        for (int i = 10; i > 0; i--) { // 拿走石頭
            n -= i;                    // 拿走i顆石頭
            if (n < 0) {               // 石頭不夠拿 變負的
                if (i % 2 == 0)
                    return false; // A輸了 (A拿偶數)
                else
                    return true; // A勝
            }
        }
        return true; // 記得最後return
    }
};
