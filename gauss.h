#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define IDX(x, y) (x * my + y)
#define DEBUG 1

//int print(double **matrix, int mx, int my);
//int gauss_iter(double *matrix[], int pos, int mx, int my);
//int gauss(double *matrix[], int mx, int my);

int print(double *matrix, int mx, int my) {
    printf("\n------------------------------------\n\n");
    for (int i = 0; i < mx; ++i) {
        for (int j = 0; j < my; ++j) {
            printf("%6.02lf ", matrix[IDX(i, j)]);
        }
        printf("\n");
    }
    printf("\n++++++++++++++++++++++++++++++++++++\n");
    return 0;
}

int iter_gauss(double *matrix, int pos, int mx, int my) {
    if (pos >= mx || pos >= my) {
        perror("in iter_gauss pos >= mx or pos >= my");
        abort();
    }
    double diag = matrix[IDX(pos, pos)];
    if (fabs(diag) < 0.00001) {
        perror("in iter_gauss diag elem == 0");
        abort();
    }
    for (int i = 0; i < my; ++i) {
        matrix[IDX(pos, i)] /= diag;
    }
    DEBUG, print(matrix, mx, my);
    return 0;
}

int gauss(double *matrix[], int mx, int my) {
//    for (int i = 0; i < mx;
    return 0;
}
