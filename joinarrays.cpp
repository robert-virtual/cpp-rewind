#include <stdio.h>




int main(){
  int array1[] = {1,2,3,4,5};
  int array2[] = {6,7,8,9,10};
  int array3[10];
  for(int i=0; i < 5; ++i) 
    array3[i] = array1[i];
  int j = 5;
  for(int i=0; i < 5; ++i){
    array3[j] = array2[i];
    ++j;
  }
  
  printf("Array3[9]: %d",array3[9]);

  return 0;
}
