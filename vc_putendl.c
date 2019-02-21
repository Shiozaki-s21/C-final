void vc_putendl(char const *s){
    int i = 0;
    char ns[100];

    while(s[i] != '\0'){
        ns[i] = s[i];
        putchar(ns[i]);
        i++;
    }

    ns[i] = '\n';  
    putchar(ns[i]); 
    
}
