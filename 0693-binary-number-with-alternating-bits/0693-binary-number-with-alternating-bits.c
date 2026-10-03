bool hasAlternatingBits(int n) {
    unsigned int num = n ^ (n >> 1);
    if (!(num & (num + 1))) {
        return true;
    }
    return false;
}