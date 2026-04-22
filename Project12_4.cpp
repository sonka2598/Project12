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

    int rows, cols;
    file >> rows;
    file >> cols;

    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            file >> arr[i][j];
        }
    }
    file.close();

    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j >= 0; j--) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
