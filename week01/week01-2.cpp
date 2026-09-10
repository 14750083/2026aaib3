///week01-2 SOIT106_ADVANCE_001
///C++版本, 再寫一些中文註解
#include <iostream> ///使用IO串流外掛
using namespace std; ///使用std命名空間
int main()
{
	int n;
	cin >> n; /// console input 到右邊的n
	int b = n, ans = 0;
	while (n>0) {
		ans = ans*10 + n%10;
		n = n/10;
	}
	///console output依序送出去
	///下面有一個錯誤的版本, 三個正確的版本
	/// cout << b << ans << b+ans; //錯誤 少 + = 跳行
	/// cout << b << "+" << ans << "=" << b+ans << "\n";//正確1
	/// cout << b << "+" << ans << "=" << b+ans << endl;//正確2
	printf("%d+%d=%d\n", b, ans, b+ans); /// 正確3
}
