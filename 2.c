#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n = 3;
    int m = 4;
    int i, j;
    float matrix[n][m];

    srand(time(NULL));

    // Заповнення матриці випадковими числами
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            matrix[i][j] = rand() % 200 - 100; // Генерувати випадкове число в діапазоні [-100, 100]
        }
    }

    // Виведення початкової матриці
    printf("Початкова матриця:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Сортування матриці
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m - 1; j++)
        {
            if (matrix[i][j] > matrix[i][j + 1])
            {
                float temp = matrix[i][j];
                matrix[i][j] = matrix[i][j + 1];
                matrix[i][j + 1] = temp;
            }
        }
    }

    // Виведення відсортованої матриці
    printf("\nВідсортована матриця:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
