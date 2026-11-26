 //week12-3.cpp 學習計畫 Linked List 第3題
 //Leetcode 2.Add Two Numbers 超極大的數相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ans = new ListNode(999); //上週教的工具1
        ListNode * now = ans; //上週教的工具2
        int carry = 0; //進位 week12重點
        //新的版本 還有剩任一條 繼續迴圈
        while (l1 != nullptr || l2 != nullptr){//把&&改||
            if (l1 != nullptr) carry += l1->val; //如果l2還有 把val加進去
            if (l2 != nullptr) carry += l2->val; //如果l2還有 把val加進去
            now->next = new ListNode(carry%10);
            carry = carry / 10; //進位 week12重點
            now = now->next;
            if (l1!=nullptr) l1 = l1->next; //如果還有 才換下一筆
            if (l2!=nullptr) l2 = l2->next;
        }
        if (carry) now->next = new ListNode(carry); //離開迴圈後 如果還有carry進位 不能漏掉
        return ans->next;
        //下面的版本 無法處理"長度不同"的問題
        //while(l1 != nullptr && l2 != nullptr){ //上週教的工具2
        //    int val = l1->val + l2->val+carry; //今天作加法
        //    now->next = new ListNode(val);  //上週教的工具2
        //    carry = val / 10; //進位 week12重點
        //    now = now->next;  //上週教的工具2
        //    l1 = l1->next; //上週教的工具2
        //    l2 = l2->next; //上週教的工具2
        //}
        //return ans->next; //上週教的工具1
    }
};
