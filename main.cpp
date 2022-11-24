#include <iostream>
#include <dlfcn.h>

#include "foo.h"
#include "bar.h"

int main() { 
  auto handle = ::dlopen("build/libBar.dylib", RTLD_LAZY | RTLD_LOCAL);
  if (!handle) {
    return 1;
  }
  check();
  return 0;
}

