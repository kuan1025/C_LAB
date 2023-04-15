/*
1. register 寄存器
在編譯時告訴complier該變數是慛在於寄存器，“盡量”將該變數存在寄存器
    (1). 不一定存在寄存器
    (2). 因為寄存器較為寶貴，不能存Array
    (3). 只能修飾char or 整數型別
    (4). cpu取變數是在寄存器，比記憶體快(內存) 
    (5). 寄存器在記憶體可能無位址 因此 p=&a; 是錯誤的
   
    register char ch;
    register short int b;
    register c;



2. 靜態變數 static  同java   
3. const 常數 同 java
4. auto 現在基本上不用 
5. extern 用於函數和全局變數的宣告
*/

  