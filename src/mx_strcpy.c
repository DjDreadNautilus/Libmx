char *mx_strcpy(char *dst, const char *src) {
    char *temp = dst; 

    while (*src != '\0') {
        *dst = *src; 
        dst++;
        src++;
    }
    
    *dst = '\0'; 

    return temp;
}





