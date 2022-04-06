#include <stdio.h>

int main(void)
{
    int ordem = 50, somadadiagonal = 0, i, j,matriz[ordem][ordem];
    printf("Digite a ordem de sua matriz:");
    scanf("%d", &ordem);

    if (ordem != 1)
    {

        for (i = 0; i < ordem; i++)
        {
            for (j = 0; j < ordem; j++)
            {
                printf("\ndigite o valor para [%d][%d]=", i, j);
                scanf("%d", &matriz[i][j]);
                if (i == j)
                {
                    somadadiagonal += matriz[i][j];
                }
            }
        }
        printf("\nA Soma da diagonal e':%d", somadadiagonal);
    }
    else
    {
        printf("Tem que ser uma matriz quadrada,insira novos valores");
    }
    return 0;
}