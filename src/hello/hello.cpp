#include "hello.h"

Hello::Hello(const char* message) : _message(message) {}

void Hello::sayHello() {
    std::cout << _message << std::endl;
}