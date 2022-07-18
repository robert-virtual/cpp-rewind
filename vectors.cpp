#include <iostream>
#include <vector>

int main() {
  std::vector<int> nums;
  for (int i = 0; i < 10; ++i) {
    nums.push_back(i);
  }
  for (int i = 0; i < 10; ++i) {
    std::cout << nums[i] << std::endl;
  }
  std::cout << "For in:" << std::endl;
  for (int v : nums) {
    std::cout << v << std::endl;
  }
  return 0;
}
