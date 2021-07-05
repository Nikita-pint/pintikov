/**
* @file Practica.cpp
* @author Пінтіков М.В.., гр. 515-Б
* @date 05 липня 2021
* @brief Практична робота 
*
*  Завдання 2
*/
// Підключення заголовочних файлів стандартної бібліотеки
#include <stdio.h>
#include <locale.h>
int main()
{
    // Підключення російської мови
    setlocale(LC_CTYPE, "rus");
    // Введення цілочисленних змінних
    unsigned int x, y, i, n, b;
    printf("Введите номер ряда: ");
    scanf_s("%d", &n);
    x = 1;
    y = 1;
    printf("Числа Фибонначи в этом ряду: %d %d ", x, y);
    // Цикл для розрахунку числа ряду Фібоначчі
    for (i = 3; i <= n; i++)
    {
        printf("%d ", x + y);
        b = x;
        x = y;
        y = b + x;
    }
    printf("\n");
    
    return 0;
}
