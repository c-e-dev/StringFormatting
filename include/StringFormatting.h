#ifndef STRINGFORMATTING_H
#define STRINGFORMATTING_H

#include <string>
#include <stdio.h>
#include <stdarg.h>
#include <iostream>
#include <cstdarg>
#include <vector>

class StringFormat{
public:
    StringFormat(){

    }

    std::string format(const char *str, ...){
        va_list args; //составляем список параметром
        va_start(args, str); //читаем список параметров

        va_list argsCopy;
        va_copy(argsCopy, args); //копируем список для подсчета количества записанных символов
        const int lengthSymbols = std::vsnprintf(NULL, 0, str, argsCopy);
        va_end(argsCopy);

        std::vector<char> newChar(lengthSymbols + 1); //выделяем память для записи всех аргументов на основе предыдущего чтения и подсчета
        std::vsnprintf(newChar.data(), newChar.size(), str, args);
        va_end(args);

        return std::string(newChar.data(), newChar.size());
    }
};

#endif // STRINGFORMATTING_H
