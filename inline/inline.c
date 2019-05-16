#include <stdio.h>
#include <stdint.h>

int main(int argc, char **argv)
{
    int32_t var1=10, var2=20, sum = 0;
    asm volatile ("addl %%ebx,%%eax;"  /* Step2  ebx為b, eax為a, 兩者相加放入eax */
                 : "=a" (sum)              /* Step3   output: sum = EAX */
                 : "a" (var1), "b" (var2)  /* Step1   inputs: EAX = var1, EBX = var2 */
                 /* 將var1=10置入a, var2=20置入b 
                    a=10, b=20 */
    );
    printf("sum = %d\n", sum);
    return 0;
}
