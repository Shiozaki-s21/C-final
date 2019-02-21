#include <stdio.h>

void vc_all_captal(int x){
    int y = x - 32;
    putchar(y);
}

void vc_striter(char *s, void (*f)(char *)){
    int i = 0;
    
    for(int i = 0; s[i]!= '\0'; i++){
        (*f)(s[i]);
    }
    putchar('\n');
}
