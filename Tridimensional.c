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

        for (int k = 0; k < x; k++)
        {
            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < z; j++)
                {
                    Matriz[k][i][j]=0;
                }
                
            }
        
        }

            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < z; j++)
                {

                    Matriz[x][i][j]=1; 
                    
                }printf("\n");
                
            } printf("\n");
            
         for (int k = 0; k < x; k++)
        {
            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < z; j++)
                {
                    printf("%d\t", Matriz[k][i][j]);
                    
                }printf("\n");
                
            } printf("\n");
            
        }

            for (int i = 0; i < y; i++)
            {
                for (int j = 0; j < z; j++)
                {

                    Matriz[x][i][j]=1;
                    
                }printf("\n");
                
            } printf("\n");
            
        
        
    return 0;
}
