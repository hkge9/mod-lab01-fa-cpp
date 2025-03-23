// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>

int main() {
    const char* str1 = "Hello 123 world test 44 hi";
    const char* str2 = "Hello world H Test Hi tEst";
    const char* str3 = "This is an example sentence";

    std::cout << "faStr1(\"" << str1 << "\") = " << faStr1(str1) << std::endl;
    std::cout << "faStr2(\"" << str2 << "\") = " << faStr2(str2) << std::endl;
    std::cout << "faStr3(\"" << str3 << "\") = " << faStr3(str3) << std::endl;

    return 0;
}
