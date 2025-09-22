#include <stdio.h>
int main(){
    int X,N;
    scanf("%d %d",&X,&N);
    int laddu = 10, jalebi = 20;
    int remind = X - (N*laddu);
    int buyingJ = remind/jalebi;
    printf("%d\n",buyingJ);

    
    return 0;
}