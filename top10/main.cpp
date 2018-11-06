#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

struct test {
  std::string name;
  int result;
};

int main(void) {
  std::ifstream ifs("result.txt");
  std::stringstream ss;

  std::string str;

  ss << ifs.rdbuf();
  std::cout << ss.str() << std::endl;

  std::vector<test> tests;

  while(!ss.eof()) {
    test test_dum;
    ss >> test_dum.name;
    ss >> test_dum.result;
    tests.push_back(test_dum);
  }

  sort(tests.begin(), tests.end(), [](const test &x, const test &y) { return x.result > y.result; });

  for (test test_cpy : tests) {
    std::cout << test_cpy.result << std::endl;
  }
  
  return 0;
}
