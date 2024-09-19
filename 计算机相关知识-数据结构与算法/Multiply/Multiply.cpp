#include <iostream>
#include <cstring>
using namespace std;


//参考资料https://zhuanlan.zhihu.com/p/366253054


char s1[105], s2[105];
int n1[105], n2[105], ans[205];
//多五位防溢出

int main() 
{
	cout << "请输入第一个乘数" << "\n";
	cin >> s1;
	cout << "请输入第二个乘数" << "\n";
	cin >> s2;
	n1[0] = strlen(s1);
	n2[0] = strlen(s2);

	for (int i = 0, j = n1[0]; i < n1[0]; i++, j--) {
		n1[j] = s1[i] - '0';
	}
	//字符变数字减去字符'0'
	//倒序存储字符块

	for (int i = 0, j = n2[0]; i < n2[0]; i++, j--) {
		n2[j] = s2[i] - '0';
	}

	ans[0] = n1[0] + n2[0] - 1;
	//最小位数=s1位数+s2位数-1

	for (int i = 1; i <= n1[0]; i++) 
	{
		for (int j = 1; j <= n2[0]; j++) 
		{
			ans[i + j - 1] += n1[i] * n2[j];
		}
	}
	//乘法运算,此时每位存在两位数的现象
	for (int i = 1; i <= ans[0]; i++) {
		if (ans[i] > 9) {
			ans[i + 1] += ans[i] / 10;
			ans[i] %= 10;
			//解决进位问题
			if (ans[0] == i) {
				ans[0]++;
			}
			//进位加位
		}
	}
	for (int i = ans[0]; i > 0; i--) {
		cout << ans[i];
	}
	cout << endl;
	//调整顺序,输出结果
	return 0;
}
