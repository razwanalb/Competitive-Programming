#include <stdio.h>
#include <math.h>
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    int value = pow(A,B) + pow(B,A);
    printf("%d\n",value);

    return 0;
}