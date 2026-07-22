

char* reversePrefix(char* word, char ch) {
    char buffer[256];
    int len = strlen(word);

    char* first_ocr = strchr(word, (int)ch);
    if (!first_ocr) {
        return word;
    }
    int idx = first_ocr - word, idx_;
    memcpy(buffer, word, (idx + 1) * sizeof(char));
    char* buffer_ = malloc((len+1) * sizeof(char));

    for (int i = 0; i < len; i++) {
        if (idx > -1) {
            buffer_[i] = buffer[idx--];
            continue;
        }
        buffer_[i] = word[i];
    }
    buffer_[len] = '\0';

    return  buffer_;
}