#include<stdio.h>
int n=5;
int i=1;
int s=1;
int main() {
    while(i<=n){
      s=s*i;         
      i++;           
    }
    printf("5!=%d\n",s) ;
}