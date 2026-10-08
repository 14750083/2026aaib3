///week05-3a.cpp 學習計畫 Built-in Function 第1題
///Leetcode 58 .Length of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0, now=0; ///最後答案 v.s. 現在累積字母
        for (char c:s){ ///逐一取字母檢查
            if (c==' '){ ///遇到空格, 要清空
            if(now!=0) ans=now; ///更新答案
            now=0; ///清空
            }else now++; ///不是空格,就+1
        }
        ///還差一點點(3個測試資料, 只對1個, 另2個有問題
        if(now!=0) ans=now; ///更新答案
        return ans; ///先試試看
    }
};
