#include "String.cpp"

int main() {
    String defaultString;
    // �� ������������� (�����������)
    defaultString.input();
    defaultString.output();

    String customSizeString(50); // ������������ ������������ ��������� ������
    customSizeString.input();
    customSizeString.output();

    String initializedString("Hello World!!");
    initializedString.output();

    String copiedString = initializedString;
    copiedString.output();

    return 0;
}