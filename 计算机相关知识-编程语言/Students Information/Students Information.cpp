#include <iostream>
#include <string.h>
#include <fstream>

void MainInput();
void Exit(int n);
void Sort();
void Delete();
void Overflow(int n);
void Load();
void Save();
void Update();//提前声明函数

struct Student{
    char name[50];
    int age;
    int sex;
    int id;
    char hobbies[100];
    float grades;
};//学生结构体数组

using namespace std;
int num = 0;
struct Student student[100]{ {"Alice",18,1,20240001,"reading",5.2f}};//初始化

void PrintInfo() {
    for (int i = 0; i <= num; i++) {
    printf("学生编号：%d  姓名：%s  年龄：%d  性别：%d  学号：%d  爱好：%s  绩点：%.1f\n\n",i + 1,student[i].name, student[i].age, student[i].sex, student[i].id, student[i].hobbies, student[i].grades);
    //学生信息打印
    }
}

void Exit(int n)
{
    if (n == 0) {
        Update();
        return;
        //退出更改
    }
}

void MainInput() {
    printf("请输入要执行的操作:\n1:添加学生  2:更改学生信息  3:删除学生  4:排序  5:保存  6:读取  0:退出操作\n");
    int input;
    scanf_s("%d", &input);
    Exit(input);
    switch (input)
    {
    case 1:
        num++;
        student[num] = { "Null",0,0,0,"Null",0};
        Update();
        break;
    case 2:
        ChangeInput();
        Update();
        break;
    case 3:
        Delete();
        Update();
        break;
    case 4:
        Sort();
        Update();
    case 5:
        Save();
        Update();
    case 6:
        Load();
        Update();
    default:
        printf("无效的输入\n");
        Update();
        break;
    }
}
void ChangeInput() {
    printf("请输入要更改信息的学生编号:  0:退出操作 \n");
    int n;
    scanf_s("%d", &n);
    Exit(n);
    
    printf("请输入要更改的信息种类:\n1:更改姓名  2:更改年龄  3:更改性别  4:更改学号  5:更改爱好  6:更改绩点  0:退出操作\n");
    int input;
    scanf_s("%d", &input);
    Exit(input);
    switch (input)
    {
    case 1: {
        char changedName[50] = { 0 };
        printf("请输入要更改的姓名：\n");
        scanf_s("%49s", changedName,(unsigned)_countof(changedName));
        strcpy_s(student[n - 1].name, changedName);
        printf("更改完成, %d号学生的姓名为: %s\n", n, changedName);
        ChangeInput();
        break;
    }
    case 2: {
        int changedAge = 0;
        printf("请输入要更改的年龄：\n");
        scanf_s("%d", &changedAge);
        student[n - 1].age = changedAge;
        printf("更改完成, %d号学生的年龄为: %d\n", n, changedAge);
        ChangeInput();
        break;
    }
    case 3: {
        int changedSex = 0;
        printf("请输入要更改的性别(0男 1女)：\n");
        scanf_s("%d", &changedSex);
        student[n - 1].sex = changedSex;
        printf("更改完成, %d号学生的性别为: %d\n", n, changedSex);
        ChangeInput();
        break;
    }
    case 4: {
        int changedId = 0;
        printf("请输入要更改的学号：\n");
        scanf_s("%d", &changedId);
        student[n - 1].id = changedId;
        printf("更改完成, %d号学生的学号为: %d\n", n, changedId);
        ChangeInput();
        break;
    }
    case 5: {
        char changedHobbies[100] = { 0 };
        printf("请输入要更改的爱好：\n");
        scanf_s("%99s", &changedHobbies, (unsigned)_countof(changedHobbies));
        strcpy_s(student[n - 1].hobbies, changedHobbies);
        printf("更改完成, %d号学生的爱好为: %s\n", n, changedHobbies);
        ChangeInput();
        break;
    }
    case 6: {
        float changedGrade = 0;
        printf("请输入要更改的绩点：\n");
        scanf_s("%f", &changedGrade);
        student[n - 1].grades=changedGrade;
        printf("更改完成, %d号学生的绩点为: %.1f\n", n, changedGrade);
        ChangeInput();
        break;
    }

    default:
        printf("无效的输入\n");
        ChangeInput();
        break;
    }
}
void Delete() {
    printf("请输入要删除的学生编号: 0:退出操作\n");
    int n;
    scanf_s("%d", &n);
    Exit(n);
    Overflow(n);

    //逻辑:num+1为总人数 n为要删除的人的编号 n-1为要删除的人在数组中的位置
    for (int i = 0; i < (num + 1 - n); i++)
    {
        student[n + i - 1] = student[n + i];
    }
    //排序
    student[num] = { "Null",0,0,0,"Null",0 };
    num--;
}

void Overflow(int n)
{
    if (n > num) {
        printf("无效的输入\n");
        Update();
    }
}

void Sort() {
    printf("请输入要改变顺序的学生编号: 0:退出操作\n");
    int n;
    scanf_s("%d", &n);    
    Exit(n);
    Overflow(n);

    printf("请输入要改变到的位置的学生编号: 0:退出操作\n");
    int m;
    scanf_s("%d", &m);
    Exit(m);
    Overflow(n);

    if (n > num && m > num) {
        printf("无效的输入\n");
        Update();
        return;
    }
    num++;
    student[num] = student[n - 1];
    //逻辑:num+1为总人数 n为要删除的人的编号 n-1为要删除的人在数组中的位置
    if (n < m) {
        for (int i = 0; i < (m - n); i++)
        {
            student[n + i - 1] = student[n + i];
        }
    }
    else
    {
        for (int i = 0; i < (n - m); i++)
        {
            student[n - 1 - i] = student[n - 2 - i];
        }
    }
    student[m - 1] = student[num];
    student[num] = { "Null",0,0,0,"Null",0 };
    num--;
}

int main()
{
    Update();
}

void Save() {
    FILE* fp = fopen("save.bin", "wb");
    if (fp == NULL)
        return;
    fwrite(&num, sizeof(int), 1, fp);
    fwrite(student,sizeof(Student), num, fp);
    fclose(fp);
    printf("保存成功!\n");
}

void Load() {
    FILE* f = fopen("save.bin", "rb");
    if (f == NULL)
        return;
    fread(&num, sizeof(int), 1, f);
    fread(student, sizeof(Student), num, f);
    fclose(f);
    printf("载入成功!\n");
}

void Update() //重置界面
{
    PrintInfo();
    MainInput();
}
