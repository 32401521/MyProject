#include <stdlib.h>
#include <stdio.h>

unsigned long fractorial(long number){
    if (number <= 1)
        return 1;
    else
        return number*fractorial(number-1);
}

int main(void){
    for (int i = 0; i <= 10; i++) {
        printf("%2d! = %1d\n",i,fractorial(i));
    }
    
    system("pause");
    return 0;
}