#include <stdio.h>
#include <stdlib.h>

double Power(double base,int times){
    double ans = 1.0;
    for (int i = 1; i <= times; i++)
    {
        ans *= base;
    }
    return ans;
}

int main(void){
    int times;
    printf("計算3.5的k次方?請輸入k=");
    scanf_s("%d",&times);
    printf("3.5的%d次方=%f\n",times,Power(3.5,times));
    system("pause");
    return 0;
}