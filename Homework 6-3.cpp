#include <iostream>
#include <Windows.h>

int fibonacci(int n) 
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n;

    std::cout << "Введите число: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Число должно быть неотрицательным!" << std::endl;
        return 1;
    }

    std::cout << "Числа Фибоначчи: ";
    for (int i = 0; i < n; i++) {
        std::cout << fibonacci(i) << "  ";
    }
    std::cout << std::endl;

    return 0;
}