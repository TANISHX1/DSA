int numberOfSteps(int num) {
    int count = 0;
    while (num > 0) {
        // ~ means not , num&(divisor -1) gives remender 
        if (~num & 1) {
            count++;
            // num>>=1 divide by 2 
            num >>= 1;
        } else {
            count++;
            num -= 1;
        }
    }
    return count;
}