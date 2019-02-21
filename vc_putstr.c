#include <stdio.h>
#include <string.h>
void vc_putstr(char *str){
    char *t = str;
    int i = 0;


    while(i < strlen(str)){
        putchar(*str);
        str++;
    }
    putchar('\n');
    

}