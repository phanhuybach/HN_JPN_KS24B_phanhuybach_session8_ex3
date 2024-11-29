#include <stdio.h>

int main() {
    int n;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n
    printf("Nhap vao mot so nguyen (kich thuoc cua ma tran vuong): ");
    scanf("%d", &n);

    // Kh?i t?o m?ng 2 chi?u v?i k�ch thu?c n x n
    int maTran[n][n];

    // G�n gi� tr? cho t?ng ph?n t? trong ma tr?n
    printf("Nhap cac phan tu cho ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &maTran[i][j]);
        }
    }

    // In ma tr?n ra du?i d?ng ma tr?n vu�ng
    printf("Ma tran vua nhap la:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d", maTran[i][j]); // In m?i ph?n t?, canh d?u 4 kho?ng tr?ng
        }
        printf("\n"); // Xu?ng d�ng sau m?i h�ng
    }

    return 0;
}

