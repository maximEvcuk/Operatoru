#pragma once

#ifdef STRINGG_H
#define STRINGG_H

#include <iostream>
#include <cstring>
ddddddddddddddddddddddddddddddddddd
class String {
private:
    char* str;
    size_t size;

public:
    // ����������� �� �������������
    String();
    String(size_t length);
    // ����������� ������������ �����
    String(const char* input);
    // ����������� ����
    String(const String& other);

    // ����� �������� �����
    void input();
    // ����� ��������� ����� �� �����
    void output() const;

    // ����������
    ~String();
};


#include "String.cpp"

#endif // STRINGG_H