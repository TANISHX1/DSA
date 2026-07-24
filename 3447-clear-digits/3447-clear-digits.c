char* clearDigits(char* s) {
    int len = strlen(s);
    char buffer[128];
    int str = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            buffer[--str] = '\0';
        } else {
            buffer[str++] = s[i];
        }
    }
    printf("str : %d ,buffer : %s\n", str, buffer);
   return strdup(buffer);
     
}
