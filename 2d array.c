#include <stdlib.h>
#include <stdio.h>

int main(void) {

    int nums[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", nums[i][j]);
        }
        printf("\n");
    }
    printf("%d \n", nums[1][1]);
    return 0;
}