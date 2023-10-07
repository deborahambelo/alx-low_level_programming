#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2) {
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }

    unsigned int i;
    char *s;
    int count;
    char *s1org;
    s1org = s1;
    char *org = s2;
    char *start;
    count = 0;

    while (*s1 != '\0') {
        count++;
        s1++;
    }
    while (*s2 != '\0') {
        count++;
        s2++;
    }

    s2 = org;
    s1 = s1org;
    count++;
    s = malloc(sizeof(char) * count);

    if (s == NULL) {
        return NULL;
    }
start = s;
    while (*s1 != '\0') {
        *s = *s1;
        s++;
        s1++;
    }

    while (*s2 != '\0') {
        *s = *s2;
        s++;
        s2++;
    }

    *s = '\0'; // Set the null-terminator

    return start;
}


