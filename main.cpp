#include <stdio.h>
#include "line.h"

int main(int argc, char **argv)
{
    if (argc != 3) {
        fprintf(stderr, "使い方: %s ファイル名1 ファイル名2\n", argv[0]);
        return 1;
    }

    Line l1(argv[1], 32);
    Line l2(argv[2], 32);

    char *line1;
    while ((line1 = l1.get_line()) != NULL) {
        printf("%s\n", line1);
    }

    char *line2;
    while ((line2 = l2.get_line()) != NULL) {
        printf("%s\n", line2);
    }

    return 0;
}
