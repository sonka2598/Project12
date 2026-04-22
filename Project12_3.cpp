#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }

    std::ofstream file("D:\\out.txt");
    file << size << " ";
    for (int i = size - 1; i >= 0; i--) {
        file << arr[i] << " ";
    }
    file.close();
    delete[] arr;

    std::cout << "Массив записан в файл out.txt" << std::endl;

    return 0;
}
