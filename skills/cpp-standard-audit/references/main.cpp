#include <functional>
#include <iostream>
#include <vector>

struct S {
  int x;
  float yy;
};

namespace {

S global_s;

}

int main() {
  auto vec = std::vector{1, 2, 3, 4, 5, 6, 7};

  auto get_vec = [&]() { return std::reference_wrapper(vec); };

  for (auto val : get_vec().get()) {
    std::cout << val << ',';
  }
  std::cout << std::endl;


  S s;
  std::cout << s.x;
}