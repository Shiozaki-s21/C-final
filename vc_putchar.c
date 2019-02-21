void vc_putchar(char c){
      extern long write(int, const char *, unsigned long);
  (void) write(1, &c, 1);
}

