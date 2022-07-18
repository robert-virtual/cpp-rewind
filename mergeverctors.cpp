#include <stdio.h>
#include <vector>


void print(std::vector<int> &arr ){
  for(int i = 0; i < arr.size(); ++i){
    printf("\nArray[%d] : %d",i,arr[i]);
  }
}
void join(std::vector<int> &arr1,std::vector<int> &arr2){
    for(int e:arr2){
      arr1.push_back(e);
    }
}

int main(){
  printf("Hola Mundo");
  std::vector<int> array1 = {10,2,3,5,1,2,3,4,510,9};
  std::vector<int> array2;
  join(array2,array1);
  print(array2);
}
