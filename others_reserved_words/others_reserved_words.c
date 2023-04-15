/**
 1. sizeof 取變數、陣列儲存大小

 int a = 10;
 int num;
 int num = sizeof(a);

 2. typedef 重新命名相關關鍵字
 e.g :
   unsighed short int a = 10; //變數＋修飾符很長 想把unsighed short int 改成U16 
   步驟：
    1. short int a;
    2. short int INT16;
    3. typedef short int INT16;
    4. INT16 b 和 short int b 是一樣的

3. volatile 亦改變
    告訴cpu該變數容易改變，每次取值都要到記憶體重新取，非寄存器
    volatile int a = 10;
*/
#include <stdio.h>
typedef short int INT16; // 宣告自定義型別
int main()
{
    short int a = 101;
    INT16 c = 111;
    printf("a=%d\n",a);
    printf("c=%d\n",c);
    return 0;
}
