#include <stdio.h>
#include <stdlib.h>
#include "gauss.h"

enum
{
    MX = 4,
    MY = 5,
};

int main(void) {
    double matrix[MX * MY] = {
        2, 2, -1, 1, 4,
        4, 3, -1, 2, 6,
        8, 5, -3, 4, 12,
        3, 3, -2, 4, 6,
    };
    print(matrix, 4, 5);
    iter_gauss(matrix, 0, 4, 5); 
    iter_gauss(matrix, 1, 4, 5); 
    iter_gauss(matrix, 2, 4, 5); 
    iter_gauss(matrix, 3, 4, 5); 
    return 0;
}
