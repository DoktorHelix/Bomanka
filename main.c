#include <stdio.h>
#include <stdlib.h>
#include "bit.h"
#include "locale.h"


int main()
{
    /*генерируем множество случайных десятичных чисел в массиве*/
    int i, n, *dec;
    setlocale(0, "rus");                        //русская озвучка
    printf("Введите размер массива: ");
    scanf("%d", &n);
    srand(time(0));                             //Функция srand() позволяет запускать программу несколько раз с различными последователь­ностями псевдослучайных чисел.
    dec = malloc(n * sizeof(int));
    printf("Сгенерированный массив:\n");
    for (i = 0; i < n; i++) {
        dec[i] = rand() % 100;                  // диапазон случайных чисед от 0 до 100
        printf("%d ", dec[i]);
    }
    putchar('\n');


    int *bin;
    bin =  malloc(n*sizeof(char)*12);









    free(dec);
    system("pause");
    return 0;
}
