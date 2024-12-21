#include "String(2).h"
#include<cstring>
#include<iostream>

String::String() : size(80) {
    str = new char[size + 1];
    str[0] = '\0';
}

String::String(size_t length) : size(length) {
    str = new char[size + 1];
    str[0] = '\0';

    String::String(const char* input) {
        size = strlen(input);
        str = new char[size + 1];
        strcpy(str, input);
    }

    String::String(const String & other) {
        size = other.size;
        str = new char[size + 1];
        strcpy(str, other.str);
    }

    void String::input() {
        std::cout << "Print String:" << std::endl;
        std::cin.getline(str, size + 1);
    }

    void String::output() const {
        std::cout << str << std::endl;
    }

    String::~String() {
        delete[] str;
    }



    // =
    String& String::operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            size = other.size;
            str = new char[size + 1];
            strcpy(str, other.str);

        }
        return *this;
    }

    // +
    String String::operator+(const String& other) const {
        String result(size + other.size);

        strcpy(result.str, str);
        strcat(result.str, other.str);
        return result;
    }

    // += 
    String& String::operator+=(const String& other) {

        size_t newSize = size + other.size;
        char* newStr = new char[newSize + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);
        delete[] str;
        str = newStr;
        size = newSize;
        return *this;
    }

    // []
    char& String::operator[](size_t index) {
        return str[index];
    }

    // <<
    std::ostream& operator<<(std::ostream& os, const String& str) {
        os << str.str;
        return os;
    }

    // ==

    bool  String::operator==(const String& other) const {
        return strcmp(str, other.str);
    }

    // !=
    bool  String::operator!=(const String& other) const {
        return !(*this == other);
    }

    // >

    bool  String::operator>(const String& other) const {
        return size > other.size;
    }

    // <

    bool  String::operator<(const String& other) const {
        return  size < other.size;
    }