#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height){
  int **ipp;
  int i;
  int j;
  if(width <= 0 || height <= 0){
      return NULL;
  }
  ipp = malloc(width * sizeof(int *));
   if(ipp == NULL){
      return NULL;
  }
  for(i=0; i<width; i++){
      ipp[i]=malloc(height * sizeof(int));
      if(ipp[i] == NULL){
      for(j=0; j < i; j++){
      free (ipp[j]);
      }
      free (ipp);
      return (NULL);
      }	
  }
  for(i=0; i<width;i++){
	  for(j = 0; j < height; j++){
		  ipp[i][j] = 0;
	  
	  }
  
  }
  return ipp;
}
