#include <stdio.h>
#include <stdlib.h>
#include "bit.h"
#include "locale.h"


int main()
{
    /*���������� ��������� ��������� ���������� ����� � �������*/
    int i, n, *dec;
    setlocale(0, "rus");                        //������� �������
    printf("������� ������ �������: ");
    scanf("%d", &n);
    srand(time(0));                             //������� srand() ��������� ��������� ��������� ��������� ��� � ���������� ��������������������� ��������������� �����.
    dec = malloc(n * sizeof(int));
    printf("��������������� ������:\n");
    for (i = 0; i < n; i++) {
        dec[i] = rand() % 100;                  // �������� ��������� ����� �� 0 �� 100
        printf("%d ", dec[i]);
    }
    putchar('\n');


    int *bin;
    bin =  malloc(n*sizeof(char)*12);









    free(dec);
    system("pause");
    return 0;
}
