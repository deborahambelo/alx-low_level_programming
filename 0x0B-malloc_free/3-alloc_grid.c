#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height){
  int **ipp;
  int i;
  if(width <= 0 || height <= 0){
      return NULL;
  }
  ipp = malloc(width * sizeof(int *));
   if(ipp == NULL){
      return NULL;
  }
  for(i=0; i<width; i++){
      ipp[i]=malloc(height * sizeof(int));
      **(ipp + i) = 0;
  }
  return ipp;
  
}
