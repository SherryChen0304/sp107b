#include<stdio.h>
int n=5;
int i=1;
int s=1;
int main() {
    while(i<=n){
      s=s*i;      
      i++;     
    }
    printf("5! = %d\n",s) ;
}

/*
s1=1, s2=1, i=1
1 = 1 * 1
2 = 1 + 1

s1=2, s2=1, i=2
2 = 1 * 2
3 = 2 + 1

s1=6, s2=2, i=3
6 = 2 * 3
4 = 3 + 1

s1=24, s2=6, i=4
24 = 6 * 4
5 = 4 + 1

s1=120, s2=24, i=5
120 = 24 * 5
6 = 5 + 1
*/