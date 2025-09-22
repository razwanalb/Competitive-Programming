#include <stdio.h>
int main(){

    int X,Y,messmeals,totalAmount;
    scanf("%d %d",&X,&Y);
    messmeals = X*6;
    totalAmount = messmeals + Y;
    printf("%d\n",totalAmount);
    return 0;
}