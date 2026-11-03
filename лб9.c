#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

#define ROW 9
#define COL 9

// Прототипы функций
int zad1a();
int zad1b();
int zad1v();
int zad2();
int zad3();

int main() {
    setlocale(LC_CTYPE, "RUS");

    printf("=== Задание 1а (Таблица Пифагора) ===\n");
    zad1a();

    printf("\n=== Задание 1б (Левый нижний треугольник) ===\n");
    zad1b();

    printf("\n=== Задание 1в (Вариант 4) ===\n");
    zad1v();

    printf("\n=== Задание 2 (Разбор числа) ===\n");
    zad2();

    printf("\n=== Задание 3 (Вариант 4: Треугольник) ===\n");
    zad3();

    return 0;
}

// 1а. Полная таблица Пифагора
int zad1a() {
    int row, col; // Локальные переменные для этой функции
    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= COL; col++) {
            printf("%5d", col * row);
        }
        printf("\n");
    }
    return 0;
}

// 1б. Левый нижний треугольник
int zad1b() {
    int row, col; // Локальные переменные
    for (row = 1; row <= ROW; ++row) {
        for (col = 1; col <= row; col++) {
            printf("%5d", col * row);
        }
        printf("\n");
    }
    return 0;
}

// 1в. Вариант 4 (Треугольник из пятерок)
int zad1v() {
    int size, row, col;
    char ans;
    do {
        printf("Введите размер фигуры (например, 5): ");
        scanf("%d", &size);
        printf("\n");

        for (row = 1; row <= size; row++) {
            for (col = 1; col <= row; col++) {
                printf("5 ");
            }
            printf("\n");
        }

        while (getchar() != '\n');
        printf("\nПродолжить? (Да - y, Нет - n): ");
        scanf("%c", &ans);
        printf("\n");
    } while (ans == 'y' || ans == 'Y');

    return 0;
}

// 2. Разбор числа
int zad2() {
    long long num;
    char ans;

    do {
        int count3 = 0;
        printf("Введите целое число: ");
        scanf("%lld", &num);

        if (num < 0) num = -num;

        if (num == 0) {
            printf("Цифр '3' в числе: 0\n");
        }
        else {
            while (num > 0) {
                int digit = num % 10;
                if (digit == 3) {
                    count3++;
                }
                num = num / 10;
            }
            printf("Количество цифр '3' в числе: %d\n", count3);
        }

        while (getchar() != '\n');
        printf("Продолжить? (Да - y, Нет - n): ");
        scanf("%c", &ans);
        printf("\n");

    } while (ans == 'y' || ans == 'Y');

    return 0;
}

// 3. Рисование фигуры (Вариант 4)
int zad3() {
    int R, i, j;
    char symbol;
    char ans;

    do {
        printf("Введите символ для построения фигуры: ");
        scanf(" %c", &symbol);

        printf("Введите размер (R): ");
        scanf("%d", &R);

        printf("\n");

        for (i = 1; i <= R; i++) {
            for (j = 1; j <= i; j++) {
                printf("%c", symbol);
            }
            printf("\n");
        }

        while (getchar() != '\n');
        printf("\nПродолжить? (Да - y, Нет - n): ");
        scanf("%c", &ans);
        printf("\n");

    } while (ans == 'y' || ans == 'Y');

    return 0;
}


