// DiceGame.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
int main()
{
	int num;
	printf("规则:每个骰子有六面，点数分别为1、2、3、4、5、6。游戏者在程序开始时输入一个无符号整数，作为产生随机数的种子。每轮投两次骰子：\n第一轮如果和数为7或11则为胜，游戏结束；和数为2、3或12则为负，游戏结束；\n和数为其它值则将此值作为自己的点数，继续第二轮、第三轮...\n直到某轮的和数等于点数则取胜，若在此前出现和数为7则为负。\n请输入一个整数种子:");
	scanf_s("%d",&num);
	srand(num);
	int dice1 = rand() % 7 + 1;
	int dice2 = rand() % 7 + 1;
	int turn = 1;
	int point1;
	int point2;
	printf("第1轮\n");
	printf("投出的第一个骰子点数为%d\n", dice1);
	printf("投出的第二个骰子点数为%d\n", dice2);
	point1 = dice1 + dice2;
	printf("和数为：%d\n", point1);
	if (dice1 + dice2 == 7 || dice1 + dice2 == 11) {
		printf("You win!");
		return 0;
	}
	else if (dice1 + dice2 == 2 || dice1 + dice2 == 3 || dice1 + dice2 == 12) {
		printf("You lose!");
		return 0;
	}
	else {
		while (1) {
			turn++;
			dice1 = rand() % 7 + 1;
			dice2 = rand() % 7 + 1;
			printf("第%d轮\n",turn);
			printf("投出的第一个骰子点数为%d\n", dice1);
			printf("投出的第二个骰子点数为%d\n", dice2);
			point2 = dice1 + dice2;
			printf("和数为：%d\n", point2);
			if (point1 == point2) {
				printf("You win!");
				break;
			}
			else if (point2 == 7) {
				printf("You lose!");
				break;
			}
			point1 = point2;
		}
	}
}
