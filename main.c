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
    /*���������� ��������� ��������� ���������� ����� � �������*/
    int i, n, dim, *dec;
    setlocale(0, "rus");                          //������� �������

    printf("������� ������ �������: ");
    scanf("%d", &n);
    printf("������� ����������� �������: ");
    scanf("%i", &dim);

    srand(time(0));                             //������� srand() ��������� ��������� ��������� ��������� ��� � ���������� ��������������������� ��������������� �����.
    dec = malloc(n * sizeof(int));
    printf("��������������� ������:\n");
    for (i = 0; i < n; i++) {
        dec[i] = rand() % dim;                  // �������� ��������� ����� �� 0 �� 100
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
