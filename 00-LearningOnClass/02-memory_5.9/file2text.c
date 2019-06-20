#include <stdio.h>
#include <stdlib.h>

char *readText(char *fileName) {
  FILE *file = fopen(fileName, "r"); // 開檔  r讀取 w寫入
  fseek(file, 0L, SEEK_END);         // 移到檔尾   0L = long int 0
  int size = ftell(file);            // 取得檔尾位置
  char *text = malloc(size+1);       // 配置剛好大小的字串空間！
  fseek(file, 0L, SEEK_SET);         // 移回檔首   (file, 1000, SEEK_SET) 從1000開始讀  
  fread(text, sizeof(char), size, file);        // 讀取整個檔案到字串中 
  
  // 等同 fread(text, 1, size, file);        
  /* 
    sizeof(char) & sizeof(int)
    讀取字元、數字
    1byte=8bits
    
  */ 
  text[size] = '\0';                 // 設定字串結尾
  fclose(file);                      // 關閉檔案
  return text;                       // 傳回字串
}

int main(int argc, char *argv[]) {
  char *text = readText(argv[1]);    // 讀入整個檔案成為字串
  printf("%s\n", text);              // 印出該字串
  free(text);                        // 釋放該字串的記憶體
}

/*
fread()
四个函数参数：
1、const  void *buffer 为指向二进制数据来源的指针；
2、size_t size 为每个数据单元所占的字节数；
3、size_t num 为需要读取的数据单元的个数； 
4、FILE *stream 为目的文件指针。

fwrite（）是将数据从*buffer 写到 FILE *stream；
而fread（）是将数据从 FILE *streamn写到*buffer，是一个相反的过程。

1.函数功能: 用来读写一个数据块。
2.一般调用形式
  fread(buffer,size,count,fp);
  fwrite(buffer,size,count,fp);
3.说明
 （1）buffer：是一个指针，对fread来说，它是读入数据的存放地址。对fwrite来说，是要输出数据的地址。
 （2）size：要读写的字节数；
 （3）count:要进行读写多少个size字节的数据项；
 （4）fp:文件型指针。
*/

/*
fseek()
四个函数参数：
1、long offset 为偏移量，正数表示正向偏移（向尾部偏移），负数表示负向偏移（向首部偏移）； 
2、int fromwhere 为偏移的起始点
      SEEK_SET(对应 0)：文件开头；
      SEEK_CUR(对应 1)：文件指针所指当前位置；
      SEEK_END(对应2)：文件结尾；

      FILE *fp;
      fseek(fp, 0, SEEK_SET);       //!< 指针定位文件首部
      fseek(fp, 100, SEEK_CUR);     //!< 指针定位离当前位置100个字节的地方
      fseek(fp, -100, SEEK_END);    //!< 指针定位离文件末尾100个字节（文件首部方向）的地方
3、返回值：如果函数执行成功，FILE *stream将指向以fromwhere 为起始点，偏移offset个字节的位置，返回返回0。若函数执行失败（比如offset超过了文件自身的大小），则不改变stream指向的位置，返回非0值。 
    若文件偏移超出了文件末尾位置，还是返回0,；若往回偏移超出了文件首部，返回-1,。
*/