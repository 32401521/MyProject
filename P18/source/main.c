#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
    char str1[60] = "Welcome";
    char str2[60];
    
    strcpy_s(str2,sizeof(char)*60,str1);
    printf("string2 = %s\n",str2);

    printf("字串長度為%d\n",strlen(str2));

    system("pause");
    return 0;
}