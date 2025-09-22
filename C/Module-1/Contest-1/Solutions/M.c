#include <stdio.h>
int main(){
    int N,M,X,Y,totalTreats;
    scanf("%d %d",&N,&M);
    scanf("%d %d",&X,&Y);

    totalTreats = N*X + M*Y;
    printf("%d\n",totalTreats);
    return 0;
}