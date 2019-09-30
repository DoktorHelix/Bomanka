#include <stdio.h>
#include <stdlib.h>
#include "bit.h"
#include "locale.h"
int dec2bin(int num)
{
    int bin = 0, k = 1;

    while (num)
    {
        bin += (num % 2) * k;
        k *= 10;
        num /= 2;
    }

    return bin;
}
int main()
{
    /*генерируем множество случайных дес€тичных чисел в массиве*/
    int i, n, dim, *dec;
    setlocale(0, "rus");                          //русска€ озвучка

    printf("¬ведите размер массива: ");
    scanf("%d", &n);
    printf("¬ведите размерность массива: ");
    scanf("%i", &dim);

    srand(time(0));                             //‘ункци€ srand() позвол€ет запускать программу несколько раз с различными последователь≠ност€ми псевдослучайных чисел.
    dec = malloc(n * sizeof(int));
    printf("—генерированный массив:\n");
    for (i = 0; i < n; i++) {
        dec[i] = rand() % dim;                  // диапазон случайных чисед от 0 до 100
        printf("%d ", dec[i]);
    }
    putchar('\n');


    int *bin;
    bin =  malloc(n*sizeof(int)*12);
    for (int c_1 = 0; c_1 < n; c_1++)
    {
     bin[c_1] = dec2bin(dec[c_1]);
     printf("%i  ", bin[c_1]);
    }
    free(dec);
    system("pause");
    return 0;
}
