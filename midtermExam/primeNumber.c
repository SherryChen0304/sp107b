#include <stdio.h>

int i, j;
int a = 5, b = 20;
int count;

int main(void)
{
    printf("列出「5-20」之所有質數：\n");

    for (j = a; j <= b; j++)
    {
        count = 0;
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
                count++;
        }

        if (count == 0)
            printf("%d ", j);
    }
}