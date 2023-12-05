#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("Ingrese la dimension 1: ");
    scanf("%d", &x);
    printf("Ingrese la dimension 2: ");
    scanf("%d", &y);
    printf("Ingrese la dimension 3: ");
    scanf("%d", &z);
    int Matriz[x][y][z];

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                for (int k = 0; k < z; k++)
                {
                    Matriz[i][j][k]=0;
                }
                
            }
            
        }

        
    return 0;
}
