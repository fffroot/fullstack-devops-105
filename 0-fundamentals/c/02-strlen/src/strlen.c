#include <stdio.h>


// Своя реализация strlen
unsigned int my_strlen(const char *str) {
    unsigned int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}