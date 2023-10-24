#include<stdio.h>
#include<stdbool.h>
#include<string.h>

struct Student
{
	int id;  // 学号
	char name[32]; // 姓名
	bool sex; // 性别
};

void st_set(struct Student* st, int id, char* name, bool sex);

int main()
{
    struct Student stu;
    int id = 2023;
    char name[20] = "马一鸣";
    bool sex = true;
    st_set(&stu,id,name,sex);
    printf("%d %s %d",id,name,sex);
}

void st_set(struct Student* st, int id, char* name, bool sex)
{
    //这样
    st->id = id;
    strcpy(st->name,name);  //这里要用strcpy函数，否则我不行。
    st->sex = sex;
}