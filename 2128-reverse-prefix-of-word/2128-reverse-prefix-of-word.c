

char* reversePrefix(char* word, char ch) {

    int len = strlen(word);
    char* first_ocr = strchr(word, (int)ch);
    if (!first_ocr) {
        return word;
    }

    int idx = first_ocr - word, idx_;
    // char* buffer_ = malloc((len+1) * sizeof(char));
char temp;
    for (int i = 0; i < idx; i++) {
temp = word[idx];
word[idx--] = word[i];
word[i] = temp; 
        // if (idx > -1) {
        //     buffer_[i] = word[idx--];
        //     continue;
        // }
        // buffer_[i] = word[i];

    }
    // buffer_[len] = '\0';

    return  word;
}