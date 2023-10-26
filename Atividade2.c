// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int matriz[3][3] = {
    {1, 3, 4},
    {2, 7, 1},
    {1, 2, 3}
};

int main() {
    int diagonalPrincipal = 0;
    int diagonalSecundaria = 0;
    int size = sizeof(matriz) / sizeof(matriz[0]);
    int sizeBuffer = size;
    for(int i = 0; i < size; i++){
        int buffer = matriz[i][i];
        int buffer2 = matriz[i][sizeBuffer-1];
        sizeBuffer--;
        diagonalPrincipal = diagonalPrincipal + buffer;
        diagonalSecundaria = diagonalSecundaria + buffer2;
    }
    printf("%d\n", diagonalPrincipal);
    printf("%d", diagonalSecundaria);
}