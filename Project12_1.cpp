#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string textInFile;
    std::ifstream file("D:\\1.txt");

    if (!file.is_open()) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    while(file >> textInFile)
    {
        std::cout << textInFile << std::endl;
    }

    return 0;
}
