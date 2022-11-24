add_compile_options("-fPIC")
add_link_options("-ldl")

add_library(Foo foo.cpp)

add_library(Bar SHARED bar.cpp)

target_link_libraries(Bar
  PUBLIC
  Foo
)

add_executable(Main
  main.cpp
)

target_link_libraries(Main
  PRIVATE Foo
)


# Main wasmedgeprocesstest
# Bar wasmedgepluginwasmedgeprocess
# Foo wasmedgeplugin

