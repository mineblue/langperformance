#include<stdio.h>
#include <stdlib.h>
#define MAX 1024
#define SIZE 100000

int comp(const void *a, const void *b);

int main(void)
{
    FILE *fp ;
    char buf[MAX]={0};
    int data[SIZE];
    int i = 0;
    size_t data_cnt;
    if((fp=fopen("data","r"))!=NULL){
        /*ファイルの終わりまで繰り返し読み込む*/
        while( fgets(buf,MAX,fp) != NULL ){
            data[i] = atoi(buf);
            //printf("1] %d: %d\n", i, data[i]);
            i++;
        }
    }
    data_cnt = sizeof( data )/sizeof( data[0] );
    qsort(data, data_cnt, sizeof( data[0] ), comp);
/*
    for(i = 0; i < SIZE; i++) {
      printf("%d: %d\n", i, data[i]);
    }
*/
    return 0;
}

int comp(const void *a, const void *b)
{
  const int _v1 = *((const int*)a);
  const int _v2 = *((const int*)b);

  if ( _v1 > _v2 ) {
    return 1;
  } else if ( _v1 < _v2 ) {
    return -1;
  } else {
    return 0;
  }
}
