#include <stdio.h>

int main() {
    int f1=1;
    int f2=0;
    int f, t;
    int n=8;
    int i=2;
    //wbegin:
    while(i<=n) {   // if(i>n) goto wend;
        f = f1 + f2;
        f2 = f1;
        f1 = f;
        i = i + 1;
        printf("f = %d\n", f);
        //goto wbegin;
    } //wend:
    
}