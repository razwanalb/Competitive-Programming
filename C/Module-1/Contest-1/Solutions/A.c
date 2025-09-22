#include <stdio.h>
int main(){
    int X,last;
    scanf("%d",&X);
    last = X%100;
    printf("K%02d\n",last);

    return 0;
}