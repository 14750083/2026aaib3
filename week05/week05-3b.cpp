///week05-3b.cpp 學習計畫 Built-in Function 第1題
///Leetcode 58 .Length of last word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); ///week05 string字串stream串流
        ///week04 C++的圓(), 是丟進去物件初始化的參數
        string ans; ///week02 C++字串的宣告
        while(ss >> ans){ /// week05-1.cpp 有用到 很像cin的iostream
            ///啥都不做
        }
        return ans.length(); ///week01 week02 字串的長度
    }
};
