#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream file("D:\\in.txt");

    if (!file.is_open()) {
        std::cout << "Ошибка открытия файла!" << std::endl;
        return 1;
    }

    int size;
    file >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        file >> arr[i];
    }

    file.close();

    std::cout << size << " ";

    for (int i = size - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
