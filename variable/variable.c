#include <stdio.h> // 導入lib 如:java import
int main()
{ // 程式切入點

    // 1. char  只佔 1 byte
    char c;
    c = 'a';
    // 注意 char 只佔1個byte
    // c = '1234' 就是錯ㄉ
    printf("ch =%c\n", c); // %c 字元
    printf("ch =%d\n", c); // %d 值
    printf("char size =>%d\n ", sizeof(c));
    // 2. short 只佔 2 byte
    short int st; // -32768~32767
    printf("short size =>%d\n ", sizeof(st));
    // 3. int 在32位元環境 4 byte , 16位元 2 byte
    int b;
    printf("int size =>%d\n ", sizeof(b));
    // 4. long
    long int lg;
    printf("long size =>%d\n ", sizeof(lg));

    // 5. float
    float f;
    f = 3.6f;
    printf("float float =>%d\n ", sizeof(f));

    // 6. double
    double d;
    d = 5.8;
    printf("double double =>%d\n ", sizeof(d));


    // 保留字
    // 1. struct 結構
    // 2. enum 列舉
    // 3. signed 有正負號 (預設 - 可省略)
    // 4. unsigned 無正負號

    return 0;
}
/*
    
    整數進制：
        10 : 1~9
        8 : 0開頭，如0123
        16 : 0x開頭 如0x1e 
    
    浮點數進制：
        10 :  如 0.0 ,0.12 
        指數形式 123e3 表示 123*10三次方 同理 123e-3
            不以f結尾預設為double
    



*/