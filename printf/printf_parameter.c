/*
 輸出方式
        %d 十進制          %u 十進制無符號
        %x 十六進制         %o 八進制
        %f float 浮點數    %lf double
        %e 指數形式        %c 字符
        %s 字串形式
        %p 指針值

*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a = 'x';
    int b = 101;
    float c = 3.14f;
    double d = 1.23;
    int e = 0x3d;
    float f = 0.0123f;
    double g = 123456;
    char *p = "hello pointer";
    printf("a =%c\n", a);
    printf("b =%d\n", b);
    printf("c =%f\n", c);
    printf("d =%lf\n", d);
    printf("e =%d\n", e);
    printf("f =%e\n", f);
    printf("g =%e\n", g);
    printf("p =%s\n", p);
    // 特殊
    printf("**%3d**\n",1); // 最少3 保留空間
    printf("**%-3d**\n",1); // 最少3 向後保留空間
    printf("**%03d**\n",1); // 最少3 補0
    printf("**%5.2f**\n",3.14159f); // 共5位 小數點2位
    
    return 0;
}
