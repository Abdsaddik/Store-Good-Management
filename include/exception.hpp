
#pragma once

#include<iostream>

class Exception {
private:
    const char* msg;

public:
    Exception(const char* str) throw() : msg{ str } {}
    const char* what() const noexcept {
        std::cerr << msg << std::endl;
    }
};
