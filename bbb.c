// #include "stdio.h"
// void increment() {
//     static int count = 0;
//     count++;
//     printf("Count: %d\n", count);
// }

// int main() {
//     increment(); // 输出 Count: 1
//     increment(); // 输出 Count: 2
//     increment(); // 输出 Count: 3
//     return 0;
// }


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
 
// int count ;
// extern void write_extern();
 
// int main()
// {
//    count = 5;
//    write_extern();
// }

// #include <stdio.h>
 
// int main()
// {
//    int a = 21;
//    int b = 10;
//    int c ;
 
//    c = a + b;
//    printf("Line 1 - c 的值是 %d\n", c );
//    c = a - b;
//    printf("Line 2 - c 的值是 %d\n", c );
//    c = a * b;
//    printf("Line 3 - c 的值是 %d\n", c );
//    c = a / b;
//    printf("Line 4 - c 的值是 %d\n", c );
//    c = a % b;
//    printf("Line 5 - c 的值是 %d\n", c );
//    c = ++a;  // 赋值后再加 1 ，c 为 21，a 为 22
//    printf("Line 6 - c 的值是 %d\n", c );
//    c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
//    printf("Line 7 - c 的值是 %d\n", c );
 
// }

// int main()
// {
//     int a = 21;
//     while (a--)
//     {
//         printf("Line 1 - a 的值是 %d\n", a );
//     }
    
//     return 0;
// }

// #include <stdio.h>
 
// int main()
// {
//    int a = 21;
//    int b = 10;
//    int c ;
 
//    if( a == b )
//    {
//       printf("Line 1 - a 等于 b\n" );
//    }
//    else
//    {
//       printf("Line 1 - a 不等于 b\n" );
//    }
//    if ( a < b )
//    {
//       printf("Line 2 - a 小于 b\n" );
//    }
//    else
//    {
//       printf("Line 2 - a 不小于 b\n" );
//    }
//    if ( a > b )
//    {
//       printf("Line 3 - a 大于 b\n" );
//    }
//    else
//    {
//       printf("Line 3 - a 不大于 b\n" );
//    }
//    /* 改变 a 和 b 的值 */
//    a = 5;
//    b = 20;
//    if ( a <= b )
//    {
//       printf("Line 4 - a 小于或等于 b\n" );
//    }
//    if ( b >= a )
//    {
//       printf("Line 5 - b 大于或等于 a\n" );
//    }
// }

// #include <stdio.h>
 
// int main()
// {
//    int a = 5;
//    int b = 20;
//    int c ;
 
//    if ( a && b )
//    {
//       printf("Line 1 - 条件为真\n" );
//    }
//    if ( a || b )
//    {
//       printf("Line 2 - 条件为真\n" );
//    }
//    /* 改变 a 和 b 的值 */
//    a = 0;
//    b = 10;
//    if ( a && b )
//    {
//       printf("Line 3 - 条件为真\n" );
//    }
//    else
//    {
//       printf("Line 3 - 条件为假\n" );
//    }
//    if ( !(a && b) )
//    {
//       printf("Line 4 - 条件为真\n" );
//    }
// }

// #include <stdio.h>
 
// int main()
// {
//    int a = 21;
//    int c ;
 
//    c =  a;
//    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c );
 
//    c +=  a;
//    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c );
 
//    c -=  a;
//    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c );
 
//    c *=  a;
//    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c );
 
//    c /=  a;
//    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c );
 
//    c  = 200;
//    c %=  a;
//    printf("Line 6 - %%= 运算符实例，c 的值 = %d\n", c );
 
//    c <<=  2;
//    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c );
 
//    c >>=  2;
//    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c );
 
//    c &=  2;
//    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c );
 
//    c ^=  2;
//    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c );
 
//    c |=  2;
//    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c );
 
// }

// #include <stdio.h>
 
// int main()
// {
//    int a = 4;
//    short b;
//    double c;
//    int* ptr;
 
//    /* sizeof 运算符实例 */
//    printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(a) );
//    printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(b) );
//    printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(c) );
 
//    /* & 和 * 运算符实例 */
//    ptr = &a;    /* 'ptr' 现在包含 'a' 的地址 */
//    printf("a 的值是 %d\n", a);
//    printf("*ptr 是 %d\n", *ptr);
 
//    /* 三元运算符实例 */
//    a = 10;
//    b = (a == 1) ? 20: 30;
//    printf( "b 的值是 %d\n", b );
 
//    b = (a == 10) ? 20: 30;
//    printf( "b 的值是 %d\n", b );
// }

// #include <stdio.h>
 
// int main()
// {
//    int a = 20;
//    int b = 10;
//    int c = 15;
//    int d = 5;
//    int e;
 
//    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
//    printf("(a + b) * c / d 的值是 %d\n",  e );
 
//    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
//    printf("((a + b) * c) / d 的值是 %d\n" ,  e );
 
//    e = (a + b) * (c / d);   // (30) * (15/5)
//    printf("(a + b) * (c / d) 的值是 %d\n",  e );
 
//    e = a + (b * c) / d;     //  20 + (150/5)
//    printf("a + (b * c) / d 的值是 %d\n" ,  e );
  
//    return 0;
// }

// #include<stdio.h>
 
// int main()
// {
//     int num;
 
//     printf("输入一个数字 : ");
//     scanf("%d",&num);
 
//     (num%2==0)?printf("偶数"):printf("奇数");
// }

// #include <stdio.h>
// int A = 10;
// int B = 20;
// char buy;
// int sum,number;
// int main()
// {
//     printf("以下是本店的商品及价格：\n A 商品每个十元；\n B 商品每个二十元。\n");
//     printf("请输入你要购买的商品（A 或 B）:");
//     scanf("%c",&buy);
//     printf("请输入所需的数量：");
//     scanf("%d",&number);
//     sum=buy=='A'?A*number:B*number;
//     printf("\n你需要的%d个%c商品总共%d元。\n",number,buy,sum);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int a;
//     printf("input integer number: ");
//     scanf("%d",&a);
//     switch(a)
//     {
//         case 1:printf("Monday\n");
//         break;
//         case 2:printf("Tuesday\n");
//         break;
//         case 3:printf("Wednesday\n");
//         break;
//         case 4:printf("Thursday\n");
//         break;
//         case 5:printf("Friday\n");
//         break;
//         case 6:printf("Saturday\n");
//         break;
//         case 7:printf("Sunday\n");
//         break;
//         default:printf("error\n");
//     }
// }

// #include <stdio.h>
 
// int main ()
// {
//    for( ; ; )
//    {
//       printf("该循环会永远执行下去！\n");
//    }
//    return 0;
// }

// #include <stdio.h>
// int main()
// {
//    for (int i = 0; i < 10; i++) 
//    {
//        if (i == 5) {
//            break;
//        }
//        printf("%d ", i);
//    }
// }

// #include <stdio.h>
// int main()
// {
//     for (int i = 0; i<10; i++)
//     {
//         if (i % 2==0)
//         {
//             continue;
//         }
//         printf("%d",i);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int a =0;
//     start:
//     if (a < 5)
//     {
//         printf("%d",a);
//         a++;
//         goto start;
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int i = 0;
//     do
//     {
//         printf("%d",i);
//         i++;
//     } while (i<5);
    
// }

// #include <stdio.h>
// int max (int num1,int num2);
// int main()
// {
//     int a = 100;
//     int b = 200;
//     int ret;
//     ret = max(a,b);
//     printf("Max value is %d\n",ret);
//     return 0;
// }

// int max(int num1,int num2)
// {
//     int result;
//     if (num1>num2)
//         result = num1;
//     else
//         result = num2;
//     return result;
// }

// #include <stdio.h>

// void swap(int x,int y)
// {
//     int temp;

//     // temp = x;
//     temp = x + y;
//     // x = y;
//     // y = temp;
//     // printf("%d\n",temp);
//     return;
// }

// int main()
// {
//     int a = 100;
//     int b = 200;
//     int c;
//     printf("交换前，a的值：%d\n",a);
//     printf("交换前，b的值：%d\n",b);

//     swap(a,b);
//     printf("交换后，a的值：%d\n",a);
//     printf("交换后，b的值：%d\n",b);

//     c = swap(a,b);
//     printf("c的值：%d\n",c);
//     return 0;
// }

// #include <stdio.h>

// void increment(int num) {
//     num++;
//     printf("Inside function: %d\n", num);
// }

// int main() {
//     int value = 5;
//     increment(value);
//     printf("Outside function: %d\n", value);
//     return 0;
// }

// #include <stdio.h>
// void swap(int *x, int *y)
// {
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//     return;

// }

// void swap(int *x, int *y);

// int main()
// {
//     int a = 100;
//     int b = 200;

//     printf("交换前，a的值：%d\n", a);
//     printf("交换前，b的值：%d\n", b);

//     swap(&a, &b);

//     printf("交换后，a的值：%d\n", a);   
//     printf("交换后，b的值：%d\n", b);

//     return 0;
// }