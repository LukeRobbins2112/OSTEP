#include <stdlib.h>

int main(){

  int * arr = (int *)malloc(100 * sizeof(int));

  free(arr + 50);
  return 0;
}
