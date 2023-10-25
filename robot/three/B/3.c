#include<stdio.h>

struct Gun
{
    char* name;
    int damage;
};  //千万要注意这个;号。

struct Person
{
    char *name;
    int hp;
};

struct Gun CreatGun(char* name,int damage);
struct Person CreatePerson(char* name,int hp);
//Person1为攻击的人，Person2为被攻击的人，gun为拿什么枪打的
void shoot(struct Person *person1 , struct Person *person2,struct Gun *gun);

int main(void)
{
    struct Gun AK_47 = CreatGun("AK-47",10);
    struct Gun AWP = CreatGun("AWP",100);
    struct Person person1 = CreatePerson("马上回来",100);
    struct Person person2 = CreatePerson("苏秋白",100);
    shoot(&person1,&person2,&AK_47);
    shoot(&person1,&person2,&AK_47);
    shoot(&person1,&person2,&AK_47);
    shoot(&person2,&person1,&AWP);
    return 0;
}

struct Gun CreatGun(char* name,int damage)
{
    struct Gun the_gun = {
        name,
        damage
    };
    return the_gun;
}

struct Person CreatePerson(char* name,int hp)
{
    struct Person the_person ={
        name,
        hp
    };
    return the_person;
}

//Person1为攻击的人，Person2为被攻击的人，gun为拿什么枪打的
void shoot(struct Person *person1 , struct Person *person2,struct Gun *gun)
{
    person2->hp -= gun->damage;
    if (person2->hp <= 0)
    {
        printf("%s已死亡,被%s使用%s杀死。\n",person2->name,person1->name,gun->name);
    }
    else
    {
        printf("%s被攻击,剩余血量%d。\n",person2->name,person2->hp);
    }
    
}