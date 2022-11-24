# linking-bug-test


```
cmake -Bbuild -GNinja
cmake --build build
./build/Main
```

In Linux the address of the global varialbe may be identical, but it's different in MacOS.

Note that you may need to modify the shared library name in main.cpp.

