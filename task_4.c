// Задача 4. Все нечетные
// Дана последовательность целых чисел через пробел, завершающаяся числом
// 0. Выведите все нечетные числа из этой последовательности, сохраняя их
// порядок.
// Данные на входе: Последовательность ненулевых целых чисел. В конце
// число 0.
// Данные на выходе: Введенная последовательность, кроме четных чисел
// в том же порядке. Число 0 не выводить.
// Пример
// Данные на входе: 12 13 173 28 19 0
// Данные на выходе: 13 173 19

#include <stdio.h>

void process_numbers(void) {
    int num;
    if (scanf("%d", &num) != 1) {
        return;
    }

    if (num == 0) {
        return;
    }

    if (num % 2 != 0) {
        printf("%d ", num);
    }

    process_numbers();
}

int main(void)
{
    printf("Enter a string sequence of numbers separated by spaces, ending with a zero '0':\n");
    process_numbers();

    return 0;
}
