#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n, dim, *dec;
    setlocale(0, "rus");

    printf("Введите размер массива: ");
    scanf("%d", &n);
    printf("Введите диапазон случайных чисел: ");
    scanf("%i", &dim);

    srand(time(0));
    dec = malloc(n * sizeof(int));
    printf("Сгенерированный массив:\n");
    for (i = 0; i < n; i++) {
        dec[i] = rand() % dim;
        printf("%d ", dec[i]);
    }
    putchar('\n');

     int k = 0;
     while (dim)
     {
         dim=dim/2;
         k++;
     }

   //  printf("%i", k);
     char * mass;
     mass = malloc(n*k*sizeof(char));

    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = k*(i+1)-1; j >= k*i ; j--)
        {
          a = dec[i]%2;
          dec[i] = dec[i] / 2;
          mass[j] = a ==1 ? '1' : '0';

        }
    }
    for (int i = 0; i < n*k; i++)
    {
        if (i%k == 0 && i !=0)
           printf(" ");
        printf("%c",mass[i]);
    }



    free(dec);
    system("pause");
    return 0;
}
