bool isValid(char* s) {
    int len = strlen(s), stack_top = 0;
    char buffer[10240];

    for (int i = 0; i < len; i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            buffer[stack_top++] = s[i];
continue;
        }
        if (stack_top!=0){

          if (s[i] == ')' && buffer[stack_top - 1] == '(') {
            buffer[stack_top--] = '\0';
            continue;
        } else if (s[i] == ']' && buffer[stack_top - 1] == '[') {
            buffer[stack_top--] = '\0';
            continue;
        } else if (s[i] == '}' && buffer[stack_top - 1] == '{') {
            buffer[stack_top--] = '\0';
            continue;
        }
        } 
        
            buffer[stack_top++] = s[i];
        
    }
    return stack_top == 0 ? true : false;
}