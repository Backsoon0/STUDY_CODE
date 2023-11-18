#include<stdio.h>
#include<math.h>

struct Complex
{
    double c1; //实部
    double x1; //虚部
};

struct Complex getSum(struct Complex* the_1,struct Complex*the_2);//和
struct Complex getSub (struct Complex* the_1,struct Complex*the_2);//差
struct Complex getMul (struct Complex* the_1,struct Complex*the_2);//积
struct Complex getDiv (struct Complex* the_1,struct Complex*the_2);//商
double getModule(struct Complex* the);//模长

int main()
{
    struct Complex the_1,the_2,Sum,Sub,Mul,Div;
    double mod1,mod2;
    scanf("%lf+%lfi",&the_1.c1,&the_1.x1);
    scanf("%lf+%lfi",&the_2.c1,&the_2.x1);
    Sum = getSum(&the_1,&the_2);
    Sub = getSub(&the_1,&the_2);
    Mul = getMul(&the_1,&the_2);
    Div = getDiv(&the_1,&the_2);
    mod1 = getModule(&the_1);
    mod2 = getModule(&the_2);
    printf("(%lf+%lfi)+(%lf+%lfi)=(%lf+%lfi)\n",the_1.c1,the_1.x1,the_2.c1,the_2.x1,Sum.c1,Sum.x1);
    printf("(%lf+%lfi)-(%lf+%lfi)=(%lf+%lfi)\n",the_1.c1,the_1.x1,the_2.c1,the_2.x1,Sub.c1,Sub.x1);
    printf("(%lf+%lfi)*(%lf+%lfi)=(%lf+%lfi)\n",the_1.c1,the_1.x1,the_2.c1,the_2.x1,Mul.c1,Mul.x1);
    printf("(%lf+%lfi)/(%lf+%lfi)=(%lf+%lfi)\n",the_1.c1,the_1.x1,the_2.c1,the_2.x1,Div.c1,Div.x1);
    printf("(%lf+%lf)的模是%lf\n",the_1.c1,the_1.x1,mod1);
    printf("(%lf+%lf)的模是%lf\n",the_2.c1,the_2.x1,mod2);
}

struct Complex getSum(struct Complex* the_1,struct Complex*the_2)
{
    struct Complex Sum;
    Sum.c1 = the_1->c1 + the_2->c1;
    Sum.x1 = the_1->x1 + the_2->x1;
    return Sum;
}

struct Complex getSub (struct Complex* the_1,struct Complex*the_2)
{
    struct Complex Sub;
    Sub.c1 = the_1->c1 - the_2->c1;
    Sub.x1 = the_1->x1 - the_2->x1;
    return Sub;
}

struct Complex getMul (struct Complex* the_1,struct Complex*the_2)
{
    struct Complex Mul;
    Mul.c1 = the_1->c1 * the_2->c1 - the_1->x1 * the_2->x1;
    Mul.x1 = the_1->c1 * the_2->x1 + the_1->x1 * the_2->c1;
    return Mul;
}

struct Complex getDiv (struct Complex* the_1,struct Complex*the_2)
{
    struct Complex Div;
    Div.c1 = 1.0*(the_1->c1 * the_2->c1 + the_1->x1 * the_2->x1)/(the_2->c1*the_2->c1 + the_2->x1*the_2->x1);
    Div.x1 = 1.0*(the_1->x1 * the_2->c1 - the_1->c1 * the_2->x1)/(the_2->c1*the_2->c1 + the_2->x1*the_2->x1);
    return Div;
}

double getModule(struct Complex* the)
{
    double module;
    module = sqrt(the->c1 * the->c1 + the->x1 * the->x1);
    return module;
}