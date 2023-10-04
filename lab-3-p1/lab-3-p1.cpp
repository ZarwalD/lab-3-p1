#include <iostream>
#include <clocale>

/**
 *
 * @brief Проверка чисел на четность
 * 
 * Программа проверяет два числа на их одновременно четность или нечетность.
 * 
 * @return 0
 * 
**/

int main()
{
    setlocale(LC_ALL, "ru");
    std::cout << "a: ";
    int firstNumber;
    std::cin >> firstNumber;
    std::cout << "b: ";
    int secondNumber;
    std::cin >> secondNumber;
    if (firstNumber % 2 == 0 && secondNumber % 2 == 0)
    {
        std::cout << "Оба четные" << std::endl;
    }
    else if (firstNumber % 2 != 0 && secondNumber % 2 != 0)
    {
        std::cout << "Оба нечетные" << std::endl;
    }
    else
    {
        std::cout << "Четное и нечетное" << std::endl;
    }
}