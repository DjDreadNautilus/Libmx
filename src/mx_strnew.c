#include "../inc/libmx.h"

char *mx_strnew(const int size) {
    if (size < 0) {
        return NULL;
    }

    char *new_str = (char*)malloc(sizeof(char) * (size + 1));

    if(!new_str) {
        return NULL;
    }

    for (int i = 0; i <= size; i++) {
        new_str[i] = '\0';
    }

    return new_str;
}




