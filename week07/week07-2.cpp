//week07-2.cpp 學習計畫 Simulation 第一題
//LeetCode 682. Baseball Game
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector <int> a; //我們的資料結構(陣列)
        for(string s : operations){
            if (s=="+"){ //前2筆相加, 塞到後面
                int now = a[a.size()-1] + a[a.size()-2];
                a.push_back(now);
            }else if (s=="D"){ //前1筆變2倍, 塞到後面
                int now = a[a.size()-1] * 2;
                a.push_back(now);
            }else if (s=="C"){ //最後1筆移除
                a.pop_back();
            }else{ //吐掉最後1筆
                int now = stoi(s);
                a.push_back(now);
            }
        }
        //陣列的所有資料 "+起來"
        int ans = 0;
        for (int now : a) ans += now;
        return ans;
    }
};
