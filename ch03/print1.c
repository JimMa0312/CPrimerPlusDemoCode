/*print1.c - 演示 printf()的一些特性*/
#include <stdio.h>

int main(void)
{
    int ten=10;
    int two=2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten-two);
    printf("Doint it wrong: ");
    printf("%d minus %d is %d", ten );  //模拟编写失误，漏掉2个参数

    return 0;
}