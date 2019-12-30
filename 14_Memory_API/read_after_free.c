#include <stdlib.h>
#include <stdio.h>

int main(){

  int * arr = (int *)malloc(100 * sizeof(int));
  free(arr);

  printf("arr[50] = %d\n", arr[50]);
  return 0;
}
