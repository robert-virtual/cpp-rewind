#include <stdio.h>
#include <vector>

void add(int n, std::vector<int> &vector) { vector.push_back(n); }

void show(std::vector<int> &vector) {
  for (int n : vector) {
    printf("%d\n", n);
  }
}

void split(std::vector<int> &vector) {
  int half = vector.size() / 2;
  std::vector<int> vector1, vector2;
  for (int i = 0; i < half; ++i) {
    vector1.push_back(vector[i]);
    vector2.push_back(vector[i + half]);
  }
  printf("vector1\n");
  show(vector1);
  printf("vector2\n");
  show(vector2);
}

void sort(std::vector<int> &vector) {
  if (vector.size() > 1) {
    int half = vector.size() / 2;
    std::vector<int> half1,half2;
    for (int i = 0; i < half; ++i) {
      half1[i] = vector[i];
      half2[i] = vector[i+half];
    }
    sort(half1);
  }

}

int main() {
  printf("Hola Mundo\n");
  std::vector<int> nums = {1, 34, 2, 5, 8, 0, 5, 27, 21};
  nums.push_back(9);
  split(nums);
  printf("nums:\n");
  show(nums);
}
