///week05-2.cpp 學習計畫 Built-in Function 第2題
///Leetcode 709. To Lower Case 變小寫字母
class Solution {
public:
    string toLowerCase(string s) {
        ///week02 教過字串s的長度 .length()
        for (int i=0; i<s.length(); i++){//逐字母處理
            if (isupper(s[i])) s[i] = s[i] - 'A' + 'a';
        } ///s[0] = 'h'; //先試試看 (看起來是錯的) 教s[i]
        return s; ///竟然直接送出去
    }
};
