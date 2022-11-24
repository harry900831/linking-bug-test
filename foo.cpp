#include <iostream>
#include "foo.h"

namespace {
  static int global = 0;
  void inc() {
    std::cout << "Con " << &global << ' ' << ++global << std::endl;
  }
}



foo::foo() {
  foo_inc();
}

void foo_inc() {
  inc();
}

void check() {
  std::cout << "Bar " << &global << ' ' << global << std::endl;
}
