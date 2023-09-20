#include "main.h"
/**
 * string_toupper - Function that reverse the content of an array of int
 * @a: Type int
 * Return: string a
 */
char *string_toupper(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {

            str[i] = str[i] - ('a' - 'A');
        }
    }
    return str;
}
