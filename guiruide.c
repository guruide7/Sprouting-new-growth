//#include <stdio.h>
 //int main()
//{
    //printf("Hello, World! \n");

    //int age = 20;
    //printf("%d\n",age);

    //char ch = 'A';
    //printf("%c\n",ch);

    //long num = 100;
    //printf("%d\n",num);

   //float f = 5.0;
   //printf("%f\n",f);

   //double d =3.14;
   //printf("%lf\n",d);

    //char-字符数据类型
    //short-短整型
    //int-整型
    //long-长整形
    //long long-更长的整型
    //float-单精度浮点数
    //doublt-双精度浮点数

    //printf("%d\n",sizeof(char));//1
    //printf("%d\n",sizeof(short));//2
    //printf("%d\n",sizeof(int));//4
    //printf("%d\n",sizeof(long));//4
    //printf("%d\n",sizeof(long long));//8
    //printf("%d\n",sizeof(float));//4
    //printf("%d\n",sizeof(double));//8

#include <stdio.h>

    //int num2 =20;//全局变量-定义在代码块之外
//局部变量和全局变量的名字建议不要相同-容易误会，长生bug
//当局部变量和全局变量的名字相同时，局部变量优先    
    int main()
{
 

    printf("Hello, World! \n");
    return 0;

    //int num1 = 10;//局部变量-定义在代码块({})之内   
    //return 0;

}
