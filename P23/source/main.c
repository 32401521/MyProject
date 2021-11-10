#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Status {
    CONTINUE,
    WON,
    LOST
};

int rollDice(void){
    int die1,die2,dieSum;
    die1 = 1+(rand()%6);
    die2 = 1+(rand()%6);
    dieSum = die1+die2;

    printf("Player rolled %d + %d = %d\n",die1,die2,dieSum);
    return dieSum;
}

int main(void){
    int sum,myPoint;
    enum Status gameStatus;

    srand(time(NULL));
    sum = rollDice();

    switch (sum)
    {
    case 7:
    case 11:
        gameStatus = WON;
        break;
    case 2:
    case 3:
    case 12:
        gameStatus = LOST;
        break;
    default:
        gameStatus = CONTINUE;
        myPoint = sum;
        printf("Point is %d\n",myPoint);
        break;
    }

    while (gameStatus == CONTINUE)
    {
        sum = rollDice();
        if (sum == myPoint)
            gameStatus = WON;
        else 
            if (sum == 7)
                gameStatus = LOST;
    }

    if (gameStatus == WON)
        puts("Player wins");
    else
        puts("Player loses");
    
    system("pause");
    return 0;
}