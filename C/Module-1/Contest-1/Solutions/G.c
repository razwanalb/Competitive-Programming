#include <stdio.h>
int main(){
    int n,a,b,c,abc,bca,cab,sum;
    scanf("%d",&n);
     a = n/100;
     b = (n/10)%10;
     c = n%10;
    
     abc = n;
     bca = b*100+c*10+a;
     cab = c*100+a*10+b;
     sum = abc+bca+cab;
    printf("%d\n",sum);

    return 0;
}