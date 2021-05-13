#include <fstream>
#include <iostream>
#include <string>

#include <emscripten.h>
#include <emscripten/bind.h>

int hoge() {
    return 42;
}

std::string fuga() {
    return "fuga";
}

EMSCRIPTEN_BINDINGS(my_module) {
    emscripten::function("hoge", &hoge);
    emscripten::function("fuga", &fuga);
}
