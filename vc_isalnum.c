int vc_isalnum(int c) {
    if ( 48 <= c && c <= 57 || 65 <= c && c <= 90 || 97 <= c && c <= 122) {
        // return non - zero as a c is num or alphabet
        return 1;
    }
    
    return 0;
}