char findTheDifference(char* s, char* t) {
char*ptr;
    for (int i = 0; t[i] != '\0'; i++) {
        ptr =strchr(s, (int)t[i]);
        if (!ptr) {
            return t[i];
        } 
            *ptr = '$';
        
    }
    return ' ';
}
