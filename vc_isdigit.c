int vc_isdigit(int c) {
    if ( 48 <= c && c <= 57 ) {
        // return non - zero as a c is num or alphabet
        return 1;
    }
    return 0;
}