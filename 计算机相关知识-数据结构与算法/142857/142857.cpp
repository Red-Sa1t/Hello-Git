#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    srand(time(NULL));
    int mom[7];
    int son[7];
    int num;
    cout << "请输入要生成的分数的数量:";
    cin >> num;
    for (int i = 0; i < num; i++) {
        mom[0] = rand() % 8 + 1;
        son[0] = rand() % 8 + 1;
        //首位不取0

        for (int i = 1; i <= 6; i++) {
            mom[i] = rand() % 9;
            son[i] = rand() % 9;
        }
        //随机取分数

        cout << "分式为" << "\n";
        for (int i = 0; i <= 6; i++) {
            cout << son[i];
        }
        cout << " / ";
        for (int i = 0; i <= 6; i++) {
            cout << mom[i];
        }
        cout << "\n";
        //输出取到的分数
        cout << "约分为" << "\n";
        for (int i = 0; i <= 6; i++) {
            for (int j = 0; j <= 6; j++) {
                if (mom[i] == son[j]) {
                    mom[i] = 10;
                    son[j] = 10;
                }
            }
        }
        int num = 0;
        //约掉相同的数字
        for (int i = 0; i <= 6; i++) {
            if (son[i] != 10) {
                cout << son[i];
                num++;
            }
        }
        if (num == 0) {
            cout << 1;
        }

        cout << " / ";

        num = 0;
        for (int i = 0; i <= 6; i++) {
            if (mom[i] != 10) {
                cout << mom[i];
                num++;
            }
        }
        if (num == 0) {
            cout << 1;
        }
        num = 0;
        //输出

    }

}