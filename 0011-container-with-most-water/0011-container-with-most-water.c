int multiply(int v_1, int lenth, int result);
int maxArea(int* height, int heightSize) {
    int R = heightSize - 1, L=0,result = 0;

        while (L<R) {

            result = multiply((height[L]>height[R]?height[R]:height[L]), (R - L), result);
            if (height[L]<height[R]){
            L++;
            }
         else {
            R--;
        }
        }
    
    return result;
}

int multiply(int v_1, int length, int result) {
    return (v_1 * length > result) ? (v_1 * length) : result;
}