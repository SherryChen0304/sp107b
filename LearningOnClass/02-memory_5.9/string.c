#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char str[]="hello!";
  char temp[100]="My name is Sherry.";
  strncpy(temp, str, strlen(str)); 
  temp[strlen(str)] = '\0';
  printf("%s\n", temp);
}


/* 
  strncpy()
  第一個參數是目的字元陣列，
  第二個參數是來源字串， 
  第三個參數則是要複製的字元長度
*/