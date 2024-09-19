#include <iostream>
#include<string>

using namespace std;

int n;//第n号猴
int m;//剩下m个桃子
char s1[105];
int  n1[205], n2[205];
void older()
{
    printf("请输入猴子个数: \n");
    scanf_s("%d", &n);
    printf("请输入剩下的桃子数量: \n");
    scanf_s("%d", &m);
    for (int i = 1; i < n; i++) {
		 m = m * 2 + 1;
    }
    printf("原本桃子的个数为: %d", m);
}


void newer()
{
	cout << "请输入猴子个数: " << "\n";
    cin >> n;
    cout<<"请输入剩下的桃子数量:" << "\n";
    cin >> s1;
	n1[0] = strlen(s1);
	for (int i = 0, j = n1[0]; i < n1[0]; i++, j--) {
		n1[j] = s1[i] - '0';
	}
	//字符变数字减去字符'0'
	//倒序存储字符块

	for (int j = 1; j < n; j++) {
		for (int i = 1; i <= n1[0]; i++)
		{
			n1[i] = n1[i] * 2;
		}

		n1[1] += 1;

		//乘法运算,此时每位存在两位数的现象
		for (int i = 1; i <= n1[0]; i++) {
			if (n1[i] > 9) {
				n1[i + 1] += n1[i] / 10;
				n1[i] %= 10;
				//解决进位问题
				if (n1[0] == i) {
					n1[0]++;
				}
				//进位加位
			}
		}

		n2[0] = n1[0];

		for (int i = n1[0]; i >= 0; i--) {
			n2[n1[0] - i + 1] = n1[i];
		}
		for (int i = 0; i <= n1[0]; i++) {
			n1[i] = n2[i];
		}
		//调整顺序,输出结果
	}
		for (int i = 1; i <= n1[0]; i++) {
		cout << n2[i];
	}
		cout << endl; 
}

int main() {
    newer();
	return 0;
}


