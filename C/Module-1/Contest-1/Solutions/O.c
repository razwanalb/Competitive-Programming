#include <stdio.h>
int main(){
    int X,Y,nuggest,starPieces,totalSell;
    scanf("%d %d",&X,&Y);
    nuggest = X * 5000;
    starPieces = Y * 9800;
    totalSell = nuggest+starPieces;
    printf("%d\n",totalSell);
    return 0;
}