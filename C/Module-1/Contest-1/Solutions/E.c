#include <stdio.h>
int main(){

    int a,b,d,r;
    scanf("%d %d",&a,&b);
    d = ( a / b);
    r = (a%b);
    double f = (double)a / b;
    
    printf("%d %d %.5lf",d,r,f); 


    return 0;
}