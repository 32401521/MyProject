#include <stdio.h>
#include <stdlib.h>

int maximum(int array[]){
    int max = array[0];
    for (int i = 0; i < 3; i++)
        if (array[i]>max)
            max = array[i];
    return max;
}

int main(void){
    int input[3]={0};
    printf("Enter three integers:");
    for (int i = 0; i < 3; i++){
       scanf_s("%d",&input[i]); 
    }    
    printf("Maximum is %d\n",maximum(input));
    system("pause");
    return 0;
}