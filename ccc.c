// #include <stdio.h>
 
// /* 函数声明 */
// void func1(void);
 
// static int count=10;        /* 全局变量 - static 是默认的 */
 
// int main()
// {
//   while (count--) 
//   {
//       func1();
//   }
//   return 0;

// }
// void func1(void)
// {
// /* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
//  * 每次调用函数 'func1' 'thingy' 值不会被重置。
//  */                
//   static int thingy=5;
//   thingy++;
//   printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
// }

// #include <stdio.h>
 
// extern int count;
 
// void write_extern(void)
// {
//    printf("count is %d\n", count);
// }

#include <stdio.h>
int main()
{
    int a =21;
    int c;
    c =a;
    printf("c = %d\n", c);
    c += a;
    printf("c = %d\n", c);
    c -= a;
    printf("c = %d\n", c);
}