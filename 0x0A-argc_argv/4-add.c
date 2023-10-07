#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;
    int i;
    int num;

    if (argc == 1) {

        printf("%d\n", sum);
        return 0;
    }

    for (i = 1; i < argc; i++) {
        num = atoi(argv[i]);
        if (num == 0 && argv[i][0] != '0') {

            printf("Error\n");
            return 1;
        }
        sum += num;
    }


    printf("%d\n", sum);
    return 0;
}

