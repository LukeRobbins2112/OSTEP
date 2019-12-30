#include <stdlib.h>


int main(){

  int * arr = (int *)malloc(16 * sizeof(int));
  arr[16] = 0;

  return 0;
}
