#include <iostream>
#include "Money.h"

int n1, n2, n3;

void Function1()
{
	int num = 0;
	for (n1 = 0; n1 <= 100; n1++) {
		for (n2 = 0; n2 <= 50; n2++) {
			for (n3 = 0; n3 <= 20; n3++) {
				if (n1 + n2 * 2 + n3 * 5 == 100) {
					num++;
				}
			}
		}
	}
	//穷举法,时间复杂度高,空间复杂度较低
	std::cout << "共有" << num << "种方案\n";
}

void Function2() {
	//因为需要n1 + n2 * 2 + n3 * 5 == 100条件成立
	//当n3=0时,n1的可能解为0,2,4,...,98,100,共(100+2)/2个
	//n3=1时,n1可能解为1,3,5,...,93,95,共(95+1)/2个
	//将n3综合考虑得到n1可能的解为(100-n3*5+2)/2个
	int num = 0;
	for (int n3 = 0; n3 <= 100 / 5; n3++) {
		num += (n3 * 5 + 2) / 2;
	}
	//规律推举,时间复杂度和空间复杂度都低,代码优化思维要求较高
	std::cout << "共有" << num << "种方案";
}

int main()
{
	Function1();
	Function2();
	return 0;
}