#include<stdio.h>

//结构体能够提高程序的可读性，知道每个变量的意义

struct Gun
{
    char* name;
    int damage;
};  //千万要注意这个;号。

struct Person
{
    char *name;
    int hp;
    int camp;//1表示警察，0表示匪徒
};

struct Gun CreatGun(char* name,int damage);
struct Person CreatePerson(char* name,int hp,int camp);
//Person1为攻击的人，Person2为被攻击的人，gun为拿什么枪打的
void shoot(struct Person *person1 , struct Person *person2,struct Gun *gun);

//让他们肆意杀戮吧！！！
int main(void)
{
    struct Gun AK_47 = CreatGun("AK-47",10);
    struct Gun AWP = CreatGun("AWP",100);
    struct Person person1 = CreatePerson("马上回来",100,1);
    struct Person person2 = CreatePerson("苏秋白",100,0);
    struct Person person3 = CreatePerson("Jrrr",100,1);
    shoot(&person1,&person2,&AK_47);
    //shoot(&person3,&person1,&AWP);
    shoot(&person3,&person2,&AWP);
    shoot(&person1,&person3,&AK_47);
    return 0;
}

//创建枪
struct Gun CreatGun(char* name,int damage)
{
    struct Gun the_gun = {
        name,
        damage
    };
    return the_gun;
}

//创建人
struct Person CreatePerson(char* name,int hp,int camp)
{
    struct Person the_person ={
        name,
        hp,
        camp
    };
    return the_person;
}

//Person1为攻击的人，Person2为被攻击的人，gun为拿什么枪打的
void shoot(struct Person *person1 , struct Person *person2,struct Gun *gun)
{
    person2->hp -= gun->damage;
    //判断攻击的人是否死亡
    if (person1->hp<0)
    {
        printf("%s,你已经死了。",person1->name);
    }
    else
    {
        //查看是否是同一阵营
        if (person1->camp == person2->camp)
        {
            printf("%s,请你不要伤害队友。\n",person1->name);
        }
        else
        {
            //判断是否死亡
            if (person2->hp <= 0)
            {
                printf("%s已死亡,被%s使用%s杀死。\n",person2->name,person1->name,gun->name);
            }
            else
            {
                printf("%s被%s攻击,剩余血量%d。\n",person2->name,person1->name,person2->hp);
            }

        }

    }
    
}