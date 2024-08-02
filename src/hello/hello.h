#pragma once
#include "iostream"
#include "web.h"

class Hello {
public:
    Hello(const char* message);
    void sayHello();
private:
    const char* _message=nullptr;
    web _web;
};