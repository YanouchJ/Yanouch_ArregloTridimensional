#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaración de variables
    int x, y, z, cont = 1;
    
    // Ingreso de las dimensiones por teclado
    printf("Ingrese la dimension 1: ");
    scanf("%d", &x);
    printf("Ingrese la dimension 2: ");
    scanf("%d", &y);
    printf("Ingrese la dimension 3: ");
    scanf("%d", &z);

    // Declaración del arreglo tridimensional
    int Matriz[x][y][z];

    // Inicialización de la matriz en ceros
    for (int k = 0; k < x; k++)
    {
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < z; j++)
            {
                Matriz[k][i][j] = 0;
            }
        }
    }
    // Inicialización de la última matriz en unos
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < z; j++)
        {

            Matriz[x - 1][i][j] = 1;
        }
    }

    // Impresión del arreglo tridimensional
    for (int k = 0; k < x; k++)
    {
        printf("Matriz %d:\n", cont++);
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < z; j++)
            {
                printf("%d\t", Matriz[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
