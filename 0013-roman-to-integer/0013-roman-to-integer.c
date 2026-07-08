#include <string.h>
int check_letter( char letter);
int romanToInt(char* s) {

    int string_len = strlen(s);
    int num = 0;
int v_1 =0,v_2=0;
for (int i = 0;i <string_len;i++) {

    v_1 = check_letter(s[i]);
    v_2 = check_letter(s[i+1]);
    
    if (v_1 > v_2) {
        num+=v_1;
    }else if  (v_1 <v_2){
        num+= v_2 - v_1;
        i++; 
    }else if ( v_1==v_2){
            num+=v_1;
    }
    }
return num;
}

int check_letter( char letter ){
    
       switch (letter) {
            case 'I':return 1;
            case 'V':return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D':return 500;
            case 'M': return 1000;
            default:return 0;
            }
}